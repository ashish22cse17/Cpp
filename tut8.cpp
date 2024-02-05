#include<iostream>
#include<iomanip>//new header..
using namespace std;
int main()
{   
    //***************constants in cpp***********    
    const int a=3;
    cout<<"the value of a was : "<<a<<endl;
    int a=45.6;//it wont change the value of a in program as it is local variable and const 'a' is also local.... 
    cout<<"the value of a was : "<<a<<endl;
    //*************manipulators in cpp********************
    int e=3,b=74,c=1233;
    cout <<"the vlaue of a is "<<e<<endl;
    cout <<"the vlaue of b is "<<b<<endl;
    cout <<"the vlaue of a is "<<c<<endl;
    cout <<"the vlaue of a is "<<setw(4)<<e<<endl;
    cout <<"the vlaue of a is "<<setw(4)<<b<<endl;// it will make space available and ones and tens place are at there location automatically or we can say this is autospacing..
    cout <<"the vlaue of a is "<<setw(4)<<c<<endl;
    // *************operator precedence*********************
    //precedence and associvitity in cpp
    //--->>>https://learn.microsoft.com/en-us/cpp/cpp/cpp-built-in-operators-precedence-and-associativity?view=msvc-170
    return 0;

}