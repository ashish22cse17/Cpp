#include<iostream>
using namespace std;
class add{
private:
int a,b,c,s;
public:
    void input(){
        cout<<"enter value of a and b";
        cin>>a;
        cin>>b;
    }
    void addition(){
        s=a+b;
    }
    void addition(int a,int b, int c){
        s=a+b+c;
        cout<<s;
    }
    void print(){
        cout<<s;
    }
    void all(){ //calling all function in one single function
        input();
        addition();
        addition(4,5,7);
        print();
    }
};
int main(){
    add fd;
    // fd.input();
    // fd.addition();
    // fd.print();
    fd.all(); 
    fd.all();
    return 0;
}