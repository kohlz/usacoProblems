#include<iostream>
using namespace std;

//1 3 2 4
//3 2 1 4
//2 1 3 4
//1 2 3 4

//4 3 2 1
//3 2 1 4
//2 1 3 4
//1 2 3 4 

//5 2 6 3 1 4

//1 3 4 2

//3 4 2 1

int main(){

    int cow[100];
    int n;

    cin>>n;
    for(int i=0; i<n; i++){
        cin>>cow[i];
    }

    int start;
    int end;
    for(int i=0; i<n; i++){
        if(cow[i] == 1){
            start = i;
        }
        if(cow[i] == n){
            end = i;
        }
    }

    int count;
    if(start < end){
        for(int i=0; i<n; i++){
            if(cow[i] != 1 || cow[i] != n){
                if(i < start){
                    count++;
                }
                if(i > end){
                    count += i;
                }
            }
        }
    }
    else if(start != 0){
        for(int i=0; i<n; i++){
            if(cow[i] != 1 || cow[i] != n){
                if(i < end){
                    count++;
                }
                if(i > end && i < start){
                    count++;
                }
            }
        }
        count++;
    }
    else{
        count++;
        for(int i = 1; i<n; i++){
            count++;
        }
    }

    cout<<count;
    return 0;
}