#include <iostream>
using namespace std;

int main(){

    double num1, num2;
    char op;

    cout<<"Enter the first number: ";
    cin>>num1;

    cout<<"Enter an operator (+,-,/,*): ";
    cin>>op;

    cout<<"Enter the second number: ";
    cin>>num2;

    switch(op){
        case '+': cout<<"Result: "<<num1 + num2<<endl;
        break;

        case '-': cout<<"Result: "<<num1 - num2<<endl;
        break;

        case '*': cout<<"Reslut: "<<num1 * num2<<endl;
        break;

        case '/':
        if(num2 != 0)
            cout<<"Result: "<<num1/num2<<endl;
        else
            cout<<"Error!!! A number cannot be divisible by zero.";
            break;

        default: cout<<"Invalid operator!"<<endl;
    }

    return 0;
}