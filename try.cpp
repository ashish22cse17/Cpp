#include<iostream>
using namespace std;
class add{
private:
int a,b,s;
public:
    void input(){
        cout<<"enter value of a and b";
        cin>>a;
        cin>>b;
    }
    void addition(){
        s=a+b;
    }
    void print(){
        cout<<s;
    }
    void all(){ //calling all function in one single function
        input();
        addition();
        print();
    }
};
int main(){
    add fd;
    // fd.input();
    // fd.addition();
    // fd.print();
    fd.all(); 
    return 0;
}