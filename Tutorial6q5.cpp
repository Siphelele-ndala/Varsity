#include <iostream>
using namespace std;

int main(){

    int ArrayA[4]={5,3,8,9};
    int ArrayB[4]={5,7,2,1};
    int sum[4];

   for(int i = 0; i < 4; i++){
        sum[i] = ArrayA[i] + ArrayB[i]; 
    }

    for(int i = 0; i < 4 ; i++){
        cout<<sum[i]<<" ";
    }

    return 0;
}