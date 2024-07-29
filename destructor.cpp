#include<iostream>
using namespace std;
int count=0;
class destructor
{
private:
    /* data */
public:
   destructor(){
    count++;
    cout<<"this is time to call const"<<endl;
   }
   ~destructor(){
    count++;
    cout<<"this is time to call desturctor"<<endl;
   }
};
int main(){
    destructor d1;
    destructor d2;
    return 0;
}

