#include<iostream>
using namespace std;
void up(int n)
{
    int i,j;
    for(i=0; i<n; i++)
    {
        for(j=0; j<i; j++)
        {
            cout<<"*";
        }
        cout<<"\n";
    }
}
void down(int n)
{
    int i,j;
    for(i=0; i<n; i++)
    {
        for(j=i; j<n; j++)
        {
            cout<<"*";
        }
        cout<<"\n";
    }
}
int main()
{
    int n;
    cout<<"enter the value of n";
    cin>>n;
    up(n);
    down(n);
}