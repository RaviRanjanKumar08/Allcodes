#include<iostream>
using namespace std;
int main () 
{
    int i,j;
   for(i=2; i<100; i++)
   {
       for(j=2; j<i; j++)
       {
           if(j%i==0)
           {
               break;
           }
           else if(i==j+1)
           {
               cout<<i<<" ";
           }
           
       }
   }
}   