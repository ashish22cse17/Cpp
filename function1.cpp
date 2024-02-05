#include<iostream>
using namespace std;
int add(int,int,int);///function prototype which assures that this function is there in this program............
int sum(int a,int b){
    int c=a+b;
    return c;
}
int main(int argc, char const *argv[])
{
    int v=5,b=6,d=7;
    cout<<"The sum is "<<sum(v,b)<<endl;
    cout<<"the sum of three number "<<add(v,b,d);
    return 0;
}
int add(int a,int b,int c){ ///function prototype
    int d=a+b+c;
    return d;
}
