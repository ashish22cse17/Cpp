//***********control structure in cpp*************
//                       |
//                       |
//                       |
//      --------------------------------
//     |                 |              |
//sequence str.    selection str.     loop str.
#include<iostream>
using namespace std;
int main()
{
    //****************if else statement in cpp**********
    //---------1.if 
    //---------2.if else
    //---------3.if else if else
    //---------
    int a=5;
    if(a>4){
        cout<<"yes";
    }
    else
    cout<<"no";
    //**************switch case in cpp***************
    char ch;
    cin>>ch;
    switch(ch){
    case 'a':
    cout<<"this is a"<<endl;
    break;
    case 'c':
    cout<<"this is c"<<endl;
    break;
    case 'b':
    cout<<"this is b"<<endl;
    break;
    default:
    cout<<"okk well done";
    break;
    }
    // *****************loop in cpp******************
    //three types of loop in cpp is 'for','while' and 'do while';
    int a2=1;
    while(a2<5){//while is loop here...
    cout<<a2<<endl;
    a2++;
    }
    return 0;
}        