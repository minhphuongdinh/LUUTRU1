#include <iostream>
#include <cmath>
using namespace std;

void Input(int n, int a[]){
    for (int i=0;i<n;i++)
        {
            cout<<"a["<<i<<"]=";
            cin>>a[i];
        }
}
void printArr(int n, int a[]){
    for (int i=0;i<n;i++)
        {
            cout<<"a["<<i<<"]="<<a[i]<<" ";
        }
}
void findMax(int n, int a[]){
    int Max=a[0];
    for (int i=0;i<n-1;i++){
        if(Max<a[i])
        Max=a[i];
    }
    cout<<"\nMax= "<<Max;
}
void Product(int n, int a[])
{
    int P=1;
    for (int i=0;i<n;i++){
        P=P*a[i];
    }
    cout<<"\nTich cua tat ca cac phan tu mang la = "<<P;
}
int checkPrime(int n){
    if (n<2) return 0;
    for(int i=2;i<= (int)sqrt(n);i++){
            if(n%i==0)
            return 0;
    }
    return 1;
}
void Prime(int n, int a[]){
    int S=0,count=0;
    for (int i=0;i<n;i++){
        if(checkPrime(a[i])==1){
        count++;
        S+=a[i];
        }
    }
    cout<<"\nSo nguyen to la "<<count<<"\nTong cua tat ca so nguyen to la "<<S;
}
int checkValue(int n, int a[]){
    int k,b=0;
    cout<<"\nNhap gia tri can kiem tra: ";
    cin>>k;
    for (int i=0;i<n;i++){
        if(a[i]==k){
        b=1;
        cout<<"a["<<i<<"] ";
        } 
    }
    if (b==1) cout<<"la vi tri co gia tri bang "<<k;
    else if (b==0) cout<<"Vi tri co gia tri bang "<<k<<" khong ton tai";
}
void sort(int n,int a[]){
    int temp;
    for (int i=0;i<n-1;i++){
        for (int j=i+1;j<n;j++)
        {   
            if (a[i] > a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    cout<<"\nMang duoc sap xep theo thu tu tang dan:\n";
    printArr(n,a);
}
void insertValue(int n,int a[]){
    int m,k;
    cout<<"\nNhap gia tri can duoc chen : ";
    cin>>m>>k;
    for (int i=k;i<=n;i++){
        a[i+1]=a[i];
    }
    a[k]=m;
    n++;
    printArr(n,a);
}
void deleteValue(int n,int a[]){
    int m;
    cout<<"\nNhap gia tri can xoa: ";
    cin>>m;

    printArr(n-1,a);
}
int main(){
    int n,a[100];
    cout<<"\nNhap so phan tu:";
    cin>>n;
    Input(n,a);
    cout<<"Mang la\n";
    printArr(n,a);
    findMax(n,a);
    Product(n,a);
    Prime(n,a);
    checkValue(n,a);
    sort(n,a);
    insertValue(n,a);
    deleteValue(n,a);
    return 0;
}

