// prime or not using class in cpp
#include<iostream>
using namespace std;
class prime
{  
private:
    int n,v=0;
    public:
    int primes(int n){
     for (int i = 1; i <= n; i++)
     {
        if(n%i==0){
          v++; 
        }
     }
     if(v==2){
      cout<<"this is prime";
     }
     else
     cout<<"this is not prime";
    }   
};
int main()
{
  int m;
  cout<<"enter the number to check: ";
  cin>>m;
    prime ashish;
    ashish.primes(m);
    return 0;
}
