/*################ Arrays and Pointers Arthemetic in cpp ###############*/
#include<iostream>
using namespace std;
int main(){
    //*************arrays********************
    // indexes -->>0--1--2--3..
    int marks[4]={23,45,34,23};
    cout<<marks[0]<<endl;
    cout<<marks[1]<<endl;
    cout<<marks[2]<<endl;
    cout<<marks[3]<<endl;
    //input is taken by loop in arrays
    // output is also given out by help of loop
    //###************==pointer arithmetic in cpp==************###
    //address new= address current + i*size of(data type)
    int *p=marks;
    cout<<*(p++);
    cout<<*p;
    cout<<"the value of marks[0] is "<<*p<<endl;
    cout<<"the value of marks[1] is "<<*(p+1)<<endl;
    cout<<"the value of marks[2] is "<<*(p+2)<<endl;
    cout<<"the value of marks[3] is "<<*(p+3)<<endl;


}