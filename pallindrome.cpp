#include<iostream>
using namespace std;
int main(){
    int n,rev=0,d;
    cout<<"enter the value of n : ";
    cin>>n;
    int m=n;
    while(m>0){
      d=m%10;
      rev=(rev*10)+d;
      m=m/10;
    }
    cout<<rev<<endl;
    if(n==rev)
    cout<<"this is pallindrome";
    else
    cout<<"this is not pallindrome";
    return 0;
}