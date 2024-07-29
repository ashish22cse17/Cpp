#include<iostream>
using namespace std;
class binary
{
private:
    string n;
public:
    void getdata();
    void chkbney();
    void print(int n);
};
void binary :: getdata(){
    cout<<"enter a number";
    cin>>n;
    
}
void binary :: chkbney(){
    for (int i = 0; i <n.length(); i++)
    {
        if (n.at(i)=='0'||n.at(i)=='1')
        {
            continue;
        }
        else{
            print(0);
            break;
        }
        
    } 
    print(1); 
}
void binary :: print(int c){
    if(c==0)
    cout<<"number you entered is not binary "<<endl;
    else{
    cout<<"number you entered is binary "<<endl;
    }
}
int main(){
    binary ashish;
    ashish.getdata();
    ashish.chkbney();
}
