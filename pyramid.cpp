#include<iostream>
using namespace std;
int main(){
    int c,r;
    cout<<"enter the no. of row and colomn : ";
    cin>>c>>r;
    int k=0;
    for(int i=0;i<c;i++){
        for (int j = 0; j < r; j++)
        {
            if(j==k+(r/2)||j==-k+(r/2)||j==r/2){
            cout<<" * ";
            
            }
            else
            cout<<"   ";
        }
        cout<<endl;
        k++;
    }
}