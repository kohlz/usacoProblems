// code not complete yet
#include<iostream>
using namespace std;

int change[2][2];

void exchange(int a){
    if(a >= change[0][0] && a <= change[0][1]){
        // x - left = right - y
        // y = right - x + left
        a = change[0][1] - a + change[0][0];
    }
    if(a >= change[1][0] && a <= change[1][1]){
        a = change[1][1] - a + change[1][0];
    }
    return;
}

int main(){

    int k;
    int n;
    cin>>k;
    cin>>n;
    int fin[1000];
    int temp = 0;
    for(int i=0; i<2; i++){
        cin>>change[i][0]>>change[i][1];
    }

    for(int i=1; i<=k; i++){
        temp = i;
        for(int j=0; j<n; j++){
            exchange(temp);
        }
        fin[temp] = i;
    }

    for(int i=1; i<=k; i++){
        cout<<fin[i]<<endl;
    }

    return 0;
}
// code not complete yet
// problem will be solved predictly in 2021.10.29