#include <iostream>
using namespace std;

int main(){

int speed;

while(true)
    {cout<<"Enter the speed of the car: ";
     cin>>speed;
     if(speed <0 || speed > 120)
        {cout<<"Invalid speed, please re-enter the correct one"<<endl;}
     else if(speed <= 19)
        {cout<<"GEAR 1"<<endl;}
     else if(speed <= 39)
        {cout<<"GEAR 2"<<endl;}
     else if(speed <= 59)
        {cout<<"GEAR 3"<<endl;}
     else if(speed <= 79)
        {cout<<"GEAR 4"<<endl;}
     else
        {cout<<"GEAR 5"<<endl;}

     char option;

     cout<<"Do you want to continue? (y/n): ";
     cin>>option;

     if(option == 'n' || option == 'N')
        {break;}
    }
return 0;
}
