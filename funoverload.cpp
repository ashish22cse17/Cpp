#include<iostream>
using namespace std;
class funoverload
{
private:
   int tt,a,b,c; 
   float tf;
public:
    int area(int a){
         return(a*a);
        
    }
    int area(int a,int b){
         return(a*b);
    }
    float area(float c){
        return(3.14*c*c);
    }
};
int main(){
    int r1,r2,ch;
    float l1;
    funoverload ashish;
    cout<<"enter the value of radius :"<<endl;
    cout<<"r1 :";
    cin>>r1;
    cout<<"r2 :";
    cin>>r2;
    cout<<"enter the value of l1 :";
    cin>>l1;
    cout<<"the area of square is : "<<ashish.area(r1)<<endl;
    cout<<"the area rectangle is : "<<ashish.area(r1,r2)<<endl;
    cout<<"the area of circle is :"<<ashish.area(l1)<<endl;
    return 0; 
}