#include<iostream>
using namespace std;

int nhap(){
    int n;
    do{cout<<"Nhap so nguyen duong : ";cin>>n;
        if(n<=0)cout<<"Khong phai so nguyen duong""\n";
    }while(n<=0);
    return n;
}
int luythua(int x, int n){
    if(n==1)return x;
    else return x*luythua(x,n-1);
}
int main(){
    int x,n;
    x=nhap();
    n=nhap();
    cout<<x<<"^"<<n<<"="<<luythua(x,n);
    return 0;
}
