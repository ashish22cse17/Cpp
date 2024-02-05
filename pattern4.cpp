// * * * * * * * 
// *           * 
// *           *  //we are printing this pattern using class
// *           * 
// *           * 
// *           * 
// * * * * * * *
#include<iostream>
using namespace std;
class pattern4
{
private:
    int n;
public:
    void square(int n){
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if(i==0 || j==0 || i==(n-1) || j==(n-1))
                cout<<" * ";
                else
                cout<<"   ";
            }
            cout<<"\n";
        } 
    }
};
int main(){
    int m;
    cout<<"enter no. of row and column: ";
    cin>>m;
    pattern4 ashish;
    ashish.square(m);
    return 0;
}
