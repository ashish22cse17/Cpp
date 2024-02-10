#include<iostream>
using namespace std;
class oddornot
{
private:
   int n;
public:
    void checks(int n){
        if(n%2==0)
        cout<<"given number "<<n<<" is even";
        else
        cout<<"given number "<<n<<" is odd";
    }
};
int main(){
    int m;
    cout<<"enter number to check : ";
    cin>>m;
    oddornot ranjan;
    ranjan.checks(m);
    return 0;
}
