#include<iostream>
using namespace std;
int main()
{
    int a[5],x,index;
    int n=sizeof(a)/sizeof(a[0]);
    cout<<"enter elements\n";
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    cout<<"enter the value of x you want to find\n";
    cin>>x;
    for(int i=0; i<n; i++)
    {
        if(a[i]==x)
        {
            index=i;
            cout<<"the number is present on index:"<<index;
        }
    }
}