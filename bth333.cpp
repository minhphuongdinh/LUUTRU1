#include<stdio.h>
#include<conio.h>
#include<math.h>
void nhapmang(int a[10],int n);
void xuatmang(int a[10],int n);
int max(int a[10],int n);
void tinhtich(int a[10],int n);
int demsnt(int a[10],int n);
void nhapx(int a[10],int m,int n);
void sapxep(int a[10],int n);
void chen(int a[10],int n,int k);
void xuatmangmoi(int a[10],int n);

int main()
{
	int n;
	int a[10];
	int m;
	int k;
	printf("\n Nhap so phan tu cua mang: ");
	scanf("%d",&n);
	nhapmang(a,n);
	xuatmang(a,n);
	max(a,n);
	tinhtich(a,n);
	demsnt(a,n);
	nhapx(a,m,n);
	sapxep(a,n);
	chen(a,n,k);
}
void nhapmang(int a[10],int n)
{
	for(int i=0;i<n;i++)
	{
	printf("\n Nhap phan tu thu a[%d]= ",i);
	scanf("%d",&a[i]);
    }
}
void xuatmang(int a[10],int n)
{
	printf("\n Phan tu cua mang la: ");
	for(int i=0;i<n;i++)
	{
		printf("  %d   .  ",a[i]);
	}
}
int max(int a[10],int n)
{
	int max=a[0];
	for(int i=0;i<n;i++)
	    if(max<a[i])
	    max=a[i];
	printf("\n\n Gia tri lown nhat mang la: %d",max);
}
void tinhtich(int a[10],int n)
{
	int tich=1;
	printf("\n\n Tich cac phan tu trong mang la: ");
	for(int i=0;i<n;i++)
	{
		tich=tich*a[i];
	}
	printf(" %d",tich);
}
bool ktsnt(int n)
{
	if(n<2)
	{
		return false;
	}
	else if(n>2)
	{
		if(n%2==0)
		{
			return false;
		}
		for(int i=3;i<=sqrt((float)n);i+=2)
		{
			if(n%i==0)
			{
				return false;
			}
		}
	}
	return true;
}
int demsnt(int a[10],int n)
{
	int dem=0;
	for(int i=0;i<n;i++)
	{
		if(ktsnt(a[i])==true)
		{
			dem++;
		}
	}
	printf("\n\n So luong so nguyen to co trong mang la: %d",dem);
}
void nhapx(int a[10],int m,int n)
{
	printf("\n\n Nhap X= ");
	scanf("%d",&m);
	{
		for(int i=0;i<n;i++)
		{
			if(m==a[i])
			{
			printf("\n Vi tri phan tu bang X la a[%d]",i);
		    }
		}
		printf("\n Khong co gia tri bang X");
	}
}
void sapxep(int a[10],int n)
{
	int tam;
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				tam=a[i];
				a[i]=a[j];
				a[j]=tam;
			}
		}
	}
	printf("\n\n Mang sap xep theo thu tu tang dan la: ");
	for(int i=0;i<n;i++)
	{
		printf("  %d  .  ",a[i]);
	}
}
void chen(int a[10],int n,int k)
{
	int x;
	printf("\n\n Nhap so can chen= ");
	scanf("%d",&x);
	for(int i=n;i>=k;i--)
	{
		a[i]=a[i-1];
	}
	a[k]=x;
	n++;
	xuatmangmoi(a,n);
}
void xuatmangmoi(int a[10],int n)
{
	printf("\n Mang moi la:");
	for(int i=0;i<n;i++)
	{
		printf("  %d  .  ",a[i]);
	}
}

