#include<iostream>
using namespace std;

int hanoi_count = 0;

void hanoi(int a, int start,int middle, int end){
    if(a==1){
        cout<<start<<' '<<end<<endl;
        hanoi_count++;
        return;
    }
    hanoi(a-1, start, end, middle);
    hanoi(1, start, middle, end);
    hanoi(a-1, middle, start, end);
}

int main (){
    int n;
    cin>>n;
    hanoi(n, 1, 2, 3);
    cout<<hanoi_count<<endl;
    return 0;
}