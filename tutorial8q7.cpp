#include <iostream>
#include <string>
using namespace std;

int main(){

    string names[4];

    string* ptr = names;


    *(ptr + 0)= "Njabulo";
    *(ptr + 1)= "Ndala";
    *(ptr + 2)= "Kayi";
    *(ptr + 3)= "Siphelele";

    for (int i = 0; i < 4; i++)
    {
        cout<<*(ptr + i)<<" "<<endl;
    }
    
    return 0;
}