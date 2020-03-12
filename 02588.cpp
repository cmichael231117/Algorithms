#include<iostream>
using namespace std;

int a,b;

int main(){
    cin>>a;
    cin>>b;
    int f,s,t;
    f=b%10;
    s=(b%100)/10;
    t=b/100;
    cout<<a*f<<endl;
    cout<<a*s<<endl;
    cout<<a*t<<endl;
    cout<<a*b<<endl;
    return 0;
}