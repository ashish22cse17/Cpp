#include<iostream>
using namespace std;
typedef struct Employees
{
    int id;
    char favchar;
    float salary;
}ep;

int main(){
    ep shubam;
    struct Employees shubham;
    shubam.id = 3;
    shubam.favchar = 'c';
    shubam.salary=1203;
    cout<<"this is shubham"<<shubam.id<<endl;
    return 0;
}