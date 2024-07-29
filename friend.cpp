#include<iostream>
using namespace std;
class complex
{
private:
    int a;
    int b;
public:
   void setdata(int v1, int v2){
    a=v1;
    b=v2;
   }
   friend complex setdatasum(complex c1, complex c2);
    void print(){
        cout<<"your complex number's are "<<a<<" + i"<<b<<endl;   
         }
};
complex setdatasum( complex c1, complex c2){
    complex o3;
    o3.setdata((c1.a+c2.a),(c1.b+c2.b));
    return o3;
    }
int main(){
    complex c1,c2,c3;
    c1.setdata(1,4);
    c2.setdata(5,8);
    c3=setdatasum(c1,c2);
    c3.print();
    return 0;
}
