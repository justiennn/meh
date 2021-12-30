#include<iostream>
#include<math.h>
using namespace std;
int nhap(){
    int n;
    do{cout<<"Nhap so nhi phan toi da 8 ki so: ";
    cin>>n;
    if(n<0||n>99999999)cout<<"So khong hop le""\n";
    }while(n<0||n>99999999);
    return n;
}
bool checknp(int n){
    while(n>0){
        int m;
        m=n%10;
        if(m>1){
            cout<<"Khong phai so nhi phan""\n";
            return 0;
        }
        n=n/10;
    }
    return 1;
}
int chuyendoi(int n){
    int temp(0),s(0);
    while(n>=0){
        s=s+pow(2,temp)*(n%10);
        temp++;
        n=n/10;
    }
    return s;
}
int main(){
    int n;
    do{n=nhap();
    }while(checknp(n)==0);
    cout<<"So thap phan cua "<<n<<" la: "<<chuyendoi(n)<<endl;
    return 0;
}

