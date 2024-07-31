#include<iostream>
using namespace std;
class Employee{
    public:
    int id;
    float salary;
     Employee(int inpId){
        id =inpId;
        salary =34.0;
     }
     Employee(){}
};
class Programmer: public Employee{
   
    Programmer(int idp){
        id=idp;
    }
    int lan=9;
};
int main(){
    Employee harry(1),ashish(2);
    cout<<harry.salary;
    cout<<ashish.salary;
    // Programmer sf(6);
    return 0;
}