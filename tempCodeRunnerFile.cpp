#include<iostream>
using namespace std;
int main()
{
    int a[5];
    int n=sizeof(a)/sizeof(a[0]);
    cout<<"enter array\n";
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    cout<<"the reverse array is:";
    for(int i=n-1; i>=0; i--)
    {
        cout<<a[i]<<"\t";
    }
}