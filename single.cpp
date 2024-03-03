#include<iostream>
using namespace std;
class Empolyee{
    public:
    void salary(){
        cout<<"my salary is 6000000"<<endl;
    }
};
class Devoloper:public Empolyee{
    public:
    void bonus(){
        cout<<"my bonus is 8000"<<endl;
    }
};
int main(){
    Devoloper Ashish;
    Ashish.salary();
    Ashish.bonus();
    return 0;
}