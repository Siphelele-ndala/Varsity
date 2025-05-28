#include <iostream>
using namespace std;

int main (){

    double array[5];

    cout<<"Enter 5 double elements: ";
    for (int i = 0; i < 5; i++)
    {
        cin>>array[i];
    }
    

    for(int i = 0; i < 5 ; i++){
        cout<<array[i]<<" ";
    }

return 0; 
}