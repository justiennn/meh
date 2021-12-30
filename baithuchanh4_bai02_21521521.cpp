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
int tonga(int n){
    if(n==1)return 1;
    else return n+tonga(n-1);
}
int tongb(int n){
    if(n==1)return 1;
    else return n*n+tongb(n-1);
}
float tongc(int n){
    if(n==1)return 1;
    else return (double)1/n+tongc(n-1);
}
int giaithua(int n){
    if(n==1)return 1;
    else return n*giaithua(n-1);
}
int tongd(int n){
    int s(0);
    for(int i=1;i<=n;i++){
        s=s+giaithua(i);
    }
    return s;
}
int main(){
    int n;
    n=nhap();
    cout<<"Tong a la: "<<tonga(n)<<endl;
    cout<<"Tong b la: "<<tongb(n)<<endl;
    cout<<"Tong c la: "<<tongc(n)<<endl;
    cout<<"Tong d la: "<<tongd(n)<<endl;
    return 0;
}
