#include<iostream>
using namespace std;
int main()
{
    int a[2][2],b[2][2],mul[2][2],i,j,k;
    cout<<"enter matrix A\n";
    for(i=0; i<2; i++)
    {
        for(j=0; j<2; j++)
        {
            cin>>a[i][j];
        }
    }
    cout<<"enter matrix B\n";
    for(i=0; i<2; i++)
    {
        for(j=0; j<2; j++)
        {
            cin>>b[i][j];
        }
    }
    for(i=0; i<2; i++)
    {
        for(j=0; j<2; j++)
        {
            mul[i][j]=0;
            for(k=0; k<2; k++)
            {
              mul[i][j]=+a[i][k]*b[j][k];   
            }
        }
    }
     cout<<"the multiple is:\n";
     for(i=0; i<2; i++)
     {
         for(j=0; j<2; j++)
         {
             cout<<mul[i][j]<<"\t";
         }
         cout<<endl;
     }
     return 0;

}