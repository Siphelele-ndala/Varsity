#include <iostream>
#include <string>
using namespace std;

int main(){

    string names[4];

    string* ptr = names;

    cout<<"Enter four names: ";
    for (int i = 0; i < 4; i++)
    {
        cin>>*(ptr + i);   
    }
    
    for (int i = 0; i < 4; i++)
    {
        cout<<*(ptr + i)<<" ";
    }
    
    return 0;
}