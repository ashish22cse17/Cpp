#include<iostream>
using namespace std;

class Empolyee{
    public:
    void id(){
        cout<<"my Empolyeeid is 6"<<endl;
    }
};
class Empolyees:public Empolyee{
    public:
    void salary(){
        cout<<"my salary is 6000000"<<endl;
    }
};

class Devoloper:public Empolyees{
    public:
    void bonus(){
        cout<<"my bonus is 8000"<<endl;
    }
};
int main(){
    Devoloper Ashish;
    Ashish.id();
    Ashish.salary();
    Ashish.bonus();
    return 0;
}