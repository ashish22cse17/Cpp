///*************lec7***********
//*****************variable************
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
    //***********************************************
    float d=34.4f;
    long double e= 34.4L;
    cout<<"the size of 34.4 is "<<sizeof(34.4)<<endl;
    cout<<"the size of 34.4f is "<<sizeof(34.4f)<<endl;
    cout<<"the size of 34.4F is "<<sizeof(34.4F)<<endl;
    cout<<"the size of 34.4l is "<<sizeof(34.4l)<<endl;
    cout<<"the size of 34.4L is "<<sizeof(34.4L)<<endl;
    cout<<"the value of d is  "<<d<<endl<<"the value of e is "<<e<<endl;
    return 0;
}
