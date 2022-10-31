#include <iostream>
using namespace std;
void swap(int *x,int *y)
{
    int t;
     t   = *x;
    *x   = *y;
    *y   =  t;
}
 
int main()
{
    int num1,num2;
 
    cout<<"Nhap vào so thu nhat: ";
    cin>>num1;
    cout<<"Nhap vào so thu hai: ";
    cin>>num2;
   
    cout<<"Truoc khi doi: \n"<<"So thu nhat = " <<num1<<"\nSo thu hai = "<<num2;
 
    swap(&num1,&num2);
 
    cout<<"\nSau khi doi: \n"<<"So thu nhat = " <<num2<<"\nSo thu hai = "<<num1;   
}
#include <iostream>
using  namespace std;

bool KTSNT(int x)
{
	if(x<2)
		return false;
	for(int i=2; i<=x/2; i++)
		if(x%i==0)
			return false;
	return true;
}

int main()
{
	unsigned int n;
	cout<<"Nhap vao so nguyen duong n: ";
	cin>>n;
	if(KTSNT(n)==true)
		cout<< n << " la so nguyen to!";
	else
		cout<< n <<" khong la so nguyen to!";
	cout<<endl;
}
#include<stdio.h>
#include<conio.h>
main(){
    printf("\n");
    float m, n, p, s;
    printf(" - Nhap chieu rong cua hcn : ");
    scanf("%f",&m);
    printf(" - Nhap chieu dai cua hcn : ");
    scanf("%f",&n);
    if((m>0)&&(n>0)){
        s = m * n;
        p = (m + n ) * 2;
        printf(" => Chu vi la: %.2f",p);
        printf("\n => Dien tich la: %.2f",s);
    }
    else{
        printf(" => Hinh chu nhat khong hop le");    
    }
    printf("\n >>>>> nldc.vn <<<<<\n");
}
#include <iostream>
using namespace std;
 
int main()
{
    int n;
    long giaiThua = 1;
    cout << "Nhap so n: ";
    cin >> n;
    for(int i = 1; i <= n; i++) {
        giaiThua = giaiThua * i;
    }
    cout << "Giai thua cua " << n << " la " << giaiThua << endl;
    return 0;
}
#include <iostream>
using namespace std;
int main()
{
	float a,b;
	cout<<"Nhap so a= ";
	cin>>a;
	cout<<"Nhap so b= ";
	cin>>b;
	cout<<"Tong cua a va b la: "<<a+b;

}
#include <stdio.h>
#include <iostream> 
using namespace std;
int main ()
{
    long temp, n;
  int TONGNT = 1;
  KTNT(int x);
do
  {
    printf("\nNhap vào so nguyên n lon hon 0 va nho hon 20: ");
    scanf("%ld", &n);
    if(n <= 0 and n >=20)
    {
      printf("\n So n phai lon hon 0 va nho hon 20, vui lòng nhap lai !");
    }
  }while(n <= 0 and n >=20);
	return 0;
	if(KTSNT(n)==true)
		cout<< n << " la so nguyen to!";
	else
		cout<< n <<" khong la so nguyen to!";
	cout<<endl;
	return 0;
	temp = n;
  while(temp != 0)
  {
     P = P + (temp % 10);
     temp = temp / 10;
  }
  cout<<"\nTong cua cac so nguyen to "<<n<<" la: "<< P;
  return 0;
	
}

#include <cmath>
#include <iostream>
using namespace std;
 
int main() {
    int i, a, b, min, ucln = 1;
 
    cout << "Nhap a : ";
    cin >> a;
    cout << "Nhap b : ";
    cin >> b;
    if(a == 0 && b == 0) {
        cout << "Hai so 0 khong co uoc chung lon nhat" << endl;
    } else if (a != 0 && b == 0) {
        cout << "Uoc chung lon nhat cua " << a << " va " << b << " la " << abs(a) << endl;
    } else if (a == 0 && b != 0) {
        cout << "Uoc chung lon nhat cua " << a << " va " << b << " la " << abs(b) << endl;
    } else {
        if(a < b) {
            min = a;
        } else {
            min = b;
        }
         
        for(int i = 1; i <= min; i++) {
            if(a%i == 0 && b%i == 0) {
                ucln = i;
            }
        }
        cout << "Uoc chung lon nhat cua " << a << " va " << b << " la " << ucln << endl;
    }
    return 0;
}
