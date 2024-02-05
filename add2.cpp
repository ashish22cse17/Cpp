#include<iostream>
using namespace std;
int c=45;
int main()
{
    int num1,num2,c;
    cout<<"enter the value of num1:\n"; // << is called insertion operator.
    cin>>num1;//>> is called extraction operator.
    cout<<"enter the value of num2:\n"<<endl;//same work of endl and \n in program to move in new line
    cin>>num2;
    c=num1+num2;
    cout<<"the sum is "<<c;
    cout<<"the sum is "<<::c;//used here '::' for global variable acess in program
    return 0;
}