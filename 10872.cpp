#include <iostream>
using namespace std;

int factorial(int a){
    if(a==1||a==0)    return 1;
    else    return a*factorial(a-1);
}

int main(){
    int n;
    if(n>=0&&n<=12){
        cin>>n;
        cout<<factorial(n);
    }
    return 0;
}