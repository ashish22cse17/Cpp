#include<iostream>
using namespace std;
class privspub
{
private:
    int a=8,b=5,c=6;
    void sum(){ //function here is private only ascess by  class only not in main
        int d=a+b+c;
        cout<<"the sum is "<<d<<endl;
    }
public:
    void subtract(){
        int f=a-b-c;
        cout<<"the difference is "<<f<<endl;
    }
   void operation(){
    sum();
    subtract();
   }
};
int main(){
    privspub ashish;
    ashish.operation();
    ashish.subtract();
    //ashish.sum(); //no acess bcz it is private function
    return 0; 
}


