#include<iostream>
using namespace std;
typedef union Employees
{
    int id;
    int roll;
    int reg;
}ep;

int main(){
    ep shubam;
    union Employees shubham;
    shubam.id = 3;
    shubam.roll =12;
    shubam.reg=1203;///last saved item will be strored in all 
    cout<<shubam.id<<endl;
    cout<<shubam.reg<<endl;
    cout<<shubam.id<<endl;
    return 0;
}