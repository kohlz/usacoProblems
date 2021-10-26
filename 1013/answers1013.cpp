#include<iostream>
using namespace std; 

int change[2][2];
int k;
int n;
int fin[1000];
int temp;

int exchange(int a){
    if(a >= change[0][0] && a <= change[0][1]){
        // x - left = right - y
        // y = right - x + left
        a = change[0][1] + change[0][0] - a;
        // cout<<a<<" ";
        // cout<<1<<" "<<change[0][0]<<" "<<change[0][1]<<endl;
    }
    if(a >= change[1][0] && a <= change[1][1]){
        a = change[1][1] + change[1][0] - a;
        // cout<<a<<" ";
        // cout<<2<<" "<<change[1][0]<<" "<<change[1][1]<<endl;
    }
    return a;
}

int main(){

    cin>>k;
    cin>>n;
    for(int i=0; i<2; i++){
        cin>>change[i][0]>>change[i][1];
    }

    for(int i=1; i<=k; i++){
        temp = i;
        for(int j=0; j<n; j++){
            temp = exchange(temp);
        }       
        // exchange(temp);
        fin[temp] = i;
    }

    for(int i=1; i<=k; i++){
        cout<<fin[i]<<endl;
    }

    return 0;
}
