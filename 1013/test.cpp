#include<iostream>
using namespace std;

int change[1][1];

void exchange(int a){
    if(a >= change[0][0] && a <= change[0][1]){
        // x - left = right - y
        // y = right - x + left
        a = change[0][1] + change[0][0] - a;
        // cout<<a<<" ";
        // cout<<1<<" "<<change[0][0]<<" "<<change[0][1]<<endl;
    }
    // if(a >= change[1][0] && a <= change[1][1]){
    //     a = change[1][1] + change[1][0] - a;
    //     cout<<a;
    //     // cout<<a<<" ";
    //     // cout<<2<<" "<<change[1][0]<<" "<<change[1][1]<<endl;
    // }
    return;
}

int main(){
    change[0][0] = 1;
    change[0][1] = 5;
    int temp = 1;
    exchange(temp);
    cout<<temp;

    return 0;
}