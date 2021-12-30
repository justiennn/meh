#include<iostream>
using namespace std;

int nhap(){
    int n;
    do{cout<<"Nhap so nguyen duong n: ";
        cin>>n;
        if(n<=0)cout<<"n khong phai so nguyen duong""\n";
    }while(n<=0);
    return n;
}
int giaithua(int n){
    if(n%2==0){
        if(n==2)return 2;
        else return n*giaithua(n-2);
    }else{
        if(n==1)return 1;
        else return n*giaithua(n-2);
    }
}
int main(){
    int n;
    n=nhap();
    cout<<n<<"!! la: " <<giaithua(n)<<endl;
    return 0;
}
