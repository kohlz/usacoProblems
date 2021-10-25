// code not complete yet
#include<iostream>
using namespace std;

int change[2][2];

void exchange(int a){
    cout<<a<<endl;
    if(a >= change[0][0] && a <= change[0][1]){
        // x - left = right - y
        // y = right - x + left
        a = change[0][1] - a + change[0][0];
        cout<<1<<endl;
    }
    if(a >= change[1][0] && a <= change[1][1]){
        a = change[1][1] - a + change[1][0];
        cout<<2<<endl;
    }
    cout<<endl;
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
//      cout<<change[i][0]<<" "<<change[i][1]<<endl;
    }
    // cout<<endl;

    for(int i=1; i<=k; i++){
        temp = i;
        for(int j=0; j<2; j++){
            exchange(temp);
            // cout<<temp<<endl;
        }
        // cout<<endl;
        // cout<<temp<<endl;
        fin[temp] = i;
    }

    // cout<<endl;
    for(int i=1; i<=k; i++){
        cout<<fin[i]<<endl;
    }

    return 0;
}
// code not complete yet