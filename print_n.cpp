// this is program to print n natural number using classs
#include<iostream>
using namespace std;
class print_n
{
private:
    int n;
public:
     void generate(int n){
        for (int i = 1; i <= n; i++)
        {
            cout<<i<<endl;
        }   
    }
};
int main(){
    int m;
    cout<<"enter number upto which you have to print: ";
    cin>>m;
    print_n ashish;
    ashish.generate(m);
}