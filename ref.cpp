///*************lec7***********
//***************reference variable in cpp**************************

#include<iostream>
using namespace std;
int main()
{
    float x=455;
    float &y=x;//& is used for assigning same value to y
    cout<<x<<endl;
    cout<<y<<endl;
    //***************typecasting**************************
    int a=34;
    float b=45.454;
    cout<<"the value of a is "<<(float)a<<endl;//both float(a) and (float)a are same 
    cout<<"the value of a is "<<float(a)<<endl;
    cout<<"the value of a is "<<(int)b<<endl;
    cout<<"the value of a is "<<int(b)<<endl;
    cout<<"the value of a+b is "<<a+int(b)<<endl;


    return 0;
}
