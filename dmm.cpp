#include<stdio.h>
void nhapmang(int a[50][50],int m, int n)
{
	for(int i=0;i<m;i++)
	   {
	   	for(int j=0;j<n;j++)
	   	   {
	   	   	printf("\nNhap gia tri cua phan tu a[%d][%d]:",i,j);
	   	   	scanf("%d",&a[i][j]);
	   	   }
	   }
}
void xuatmang(int a[50][50], int m, int n)
{
	for(int i=0;i<m;i++)
	   {
	   	for(int j=0;j<n;j++)
	   	   {
	   	   	printf("%d  ",a[i][j]);
	   	   }
	   	printf("\n");
	   }
}
void sapxepmang(int a[50][50],int m,int n)
{
	int k=n*m;
	for(int i=0;i<k-1;i++)
	    for(int j=i+1;j<k;j++)
	    	{
	          	if(a[i/n][i%n]>a[j/n][j%n])
	    		  {
	    		  	int tm=a[i/n][i%n];
	    		  	a[i/n][i%n]=a[j/n][j%n];
	    		  	a[j/n][j%n]=tm;
	    		  }
	        }
	xuatmang(a,m,n);
}
int ktntmatran(int k)
{
	if(k<2)
	  	return 0;
	else if(k>2)
	  {
	  	if(k%2==0)
	      {
	      	return 0;
		  }
	for(int i=3; i<k; i+=2)
	{
		if(k%i==0)
		  {
		  	return 0;
		  }
	}
	  }
	  return 1; 
	  }  
void chiahetcho3(int a[50][50],int m,int n)
{
	int tong=0;
	for(int i=0;i<m;i++)
	   {
	    for(int j=0;j<n;j++)
	       {
	   	    if(ktntmatran(a[i][j])==1 && a[i][j]%3==0)
	   	      {
	   	        tong=tong+a[i][j];
	          }
           }
       }
	printf("\ntong cac so nguyen to chia het cho 3 la: %d",tong);

}
int main()
{
	int m,n,a[50][50];
	printf("\nNhap so dong:");
	scanf("%d",&m);
	printf("\nNhap so cot:");
	scanf("%d",&n);
	nhapmang(a,m,n);
	printf("\ngia tri cac phan tu cua mang vua nhap:\n");
	xuatmang(a,m,n);
	printf("\ngia tri cac phan tu cua mang sau khi sap xep la:\n");
	sapxepmang(a,m,n);
	
	chiahetcho3(a,m,n);
}
