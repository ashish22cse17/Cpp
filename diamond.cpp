#include<iostream>
using namespace std;
class diamond
{
private:
    int n;
public:
   void maker(int n){
    for (int i = 0; i < n; i++){
        for (int j = n-i; j >=1; j--){
            cout<<" ";
        }
    for (int j = 1; j >=i; j++)
    {
       cout<<" * ";
    } 
    cout<<endl; 
    }
    //downward part of diamond
    for (int i = 1; i < n; i++){
        for (int j = 1; j<=i; j++){
            cout<<" ";
        }
    for (int j = n-1; j >=i; j--)
    {
       cout<<" * ";
    } 
    cout<<endl; 
    }
   }
};
int main(){
    int m;
    cout<<"enter number of rows : ";
    cin>>m;
    diamond ashish;
    ashish.maker(m);
    return 0;
}