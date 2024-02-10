#include<iostream>
using namespace std;
class factorial
{
private:
    int n,facts=1;
public:
    void fact(int n){
        for (int i = 1; i <= n; i++)
        {
            facts=facts*i;
        }
        cout<<"the factorial of "<<n<<" is "<<facts;  
    }
};
int main(){
    int m;
    cout<<"enter the number m: ";
    cin>>m;
    factorial ashish;
    ashish.fact(m);
    return 0;
    
}