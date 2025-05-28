#include <iostream>
using namespace std;


int main(){

    string names[] = {"Nyiko" , "Tyetye" , "Ringetani" , "Kingsley" };

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if(names[j] < names[j+1]){
                string temp = names[j];
                names[j] = names[j+1];
                names[j+1] = temp;
            }
        }
        
    }
    
    for (int i = 0; i < 4; i++)
    {
        cout<<names[i]<<endl;
    }
    
    return 0;
}

