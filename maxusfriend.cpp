#include<iostream>
using namespace std;
class maximum{
    int a,b,c;
    public:
    void input(){
        cout<<"Enter three number a,b and c: ";
        cin>>a>>b>>c;
    }
    friend void find(maximum obj);
};
    void find(maximum obj){
    if(obj.a>obj.b&&obj.a>obj.c){
    cout<<obj.a<<" is largest"<<endl;
    }
    else if(obj.b>obj.a&&obj.b>obj.c){
    cout<<obj.b<<" is largest in all"<<endl;
    }
    else{
        cout<<obj.c<<" is largest in all"<<endl;
    }
    }
int main(){
    maximum obj;
    obj.input();
    find(obj);
    return 0;
}