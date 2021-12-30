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
void dao(int n){
    cout<<"So dao nguoc cua "<<n<<" la: ";
    while(n>0){
        cout<<n%10;
        n=n/10;
    }
    cout<<"\n";
}
bool checkcp(int n){
    for(int i=1;i*i<=n;i++){
        if(i*i==n)return 1;
    }
    return 0;
}
bool checksnt(int n){
    for(int i=2;i<n;i++){
        if(n%i==0)return 0;
    }
    return 1;
}
int tongle(int n){
    int s(0),m;
    while(n>0){
        m=n%10;
        if(m%2!=0)s=s+m;
        n=n/10;
    }return s;
}
int tongsnt(int n){
    int s(0);
    for(int i=1;i<n;i++){
        if(checksnt(i))s=s+i;
    }
    return s;
}
int tongcp(int n){
    int s(0);
    for(int i=1;i<n;i++){
        if(checkcp(i))s=s+i;
    }
    return s;
}
int tonguoc(int n){
    int s;
    for(int i=1;i<n;i++){
        if(n%i==0)s=s+i;
    }
    return s;
}
int main(){
    int n;
    n=nhap();
    dao(n);
    if(checkcp(n))cout<<"So chinh phuong""\n";
    else cout<<"Khong phai so chinh phuong""\n";
    if(checksnt(n))cout<<"So nguyen to""\n";
    else cout<<"Khong phai so nguyen to""\n";
    cout<<"Tong cac so le cua n la: "<<tongle(n)<<"\n";
    cout<<"Tong cac so nguyen to nho hon n la: "<<tongsnt(n)<<"\n";
    cout<<"Tong cac so chinh phuong nho hon n la: "<<tongcp(n)<<"\n";
    cout<<"Tong cac uoc cua n la: "<<tonguoc(n)<<"\n";
    return 0;
}

