//******************lecture-10 code with harry******************
//++++++++++++++++++|topic loops in cpp|++++++++++++++++++++++++
#include<iostream>
using namespace std;
int main()
{
    /*====================|for loops in cpp|===================*/
    int i;
    for(i=1;i<=50;i++){//for(initialisation:condion;updation)
        cout<<i<<endl;
    }
    /*====================|while loops in cpp|===================*/
    int j=1;
    while (j<=50)
    {
        cout<<j<<endl;
        j++;
    }
    /*====================|do while loops in cpp|===================*/
   int h=1;
   do
   {
        cout<<h<<endl;
        h++;
   } while (h<=50);
   //****************** table of 6 *********************
   int s=1;
   do
   {
   cout<<6*s<<endl;
   s++;
   } while (s<=10);
    return 0;
}
