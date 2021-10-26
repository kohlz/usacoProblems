// code not completed yet
#include<iostream>
using namespace std;

int nut[3] = {1, 2, 3};

void exchange(int a, int b){
    int temp = nut[a];
    nut[a] = nut[b];
    nut[b] = a;
}

void max(int a, int b, int c){
    int tempNum[3] = {a, b, c};
    for(int i=0; i<3; i++){
        for(int j=i+1; j<3; j++){
            if(tempNum[i] < tempNum[j]){
                int temp = tempNum[i];
                tempNum[i] = tempNum[j];
                tempNum[j] = temp;
            }
        }
    }
    cout<<tempNum[0];
}

int main(){

    int times;
    cin>>times;
    int num[100][3];
    for(int i=0; i<times; i++){
        cin>>num[i][0]>>num[i][1]>>num[i][2];
    }

    int count1 = 0;
    int count2 = 0;
    int count3 = 0;

    for(int n=1; n<=3; n++){
        for(int i=0; i<times; i++){
            exchange(num[i][0], num[i][1]);
            if(nut[num[0][2]] == n && n == 1){
                count1++;
            }
            if(nut[num[0][2]] == n && n == 2){
                count2++;
            }
            if(nut[num[0][2]] == n && n == 3){
                count3++;
            }
        }
    }

    max(count1, count2, count3);


    return 0;
}