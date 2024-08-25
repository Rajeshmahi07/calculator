#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    float num1,num2;
    char ok;
    cout <<"Enter num1 : ";
    cin>>num1;
    cout<<endl<<"Enter num2 : ";
    cin>>num2;
    cout<<endl<<"Enter operator like(+,-,*,/) = ";
    cin>>ok;
    switch (ok)
    {
    case '+':
    cout<<"Result "<< num1<<" + "<< num2<<" = "<<num1+num2;
        break;
        case '-':
    cout<<"Result "<< num1<<" - "<< num2<<" = "<<num1 - num2;
        break;
        case '*':
    cout<<"Result "<< num1<<" * "<< num2<<" = "<<num1 * num2;
        break;
        case '/':
    cout<<"Result "<< num1<<" / "<< num2<<" = "<<num1 / num2;
        break;
    default:
    cout<<"Enter Correct operator";
        break;
    }
    return 0;
}