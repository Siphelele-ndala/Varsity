#include <iostream>
using namespace std;

int main(){
    
    char A[]={'b','f','y','r','e','j','k','i'}, key = 'j';

    for (char i = 0; i < 8; i++){
        
        if(A[i]==key){
            cout<<"The element "<<key<<" has been found."<<endl;
        }
    }

return 0;
}