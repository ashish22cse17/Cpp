#include<iostream>
using namespace std;
int main() 
{ 
    int r;
    cout<<"enter no of rows : ";
    cin>>r;
    int n=65;
    for (int i = 65; i <n+r+1; i++)
    {
    for (int j = 65; j < i; j++)
    {
    cout<<" "<<(char)j<<" "; 
    }
    cout<<endl;
    }
    return 0;
}