#include<iostream>
using namespace std;
void up(int n)
{
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<i; j++)
        {
            cout<<"*";
        }
        cout<<"\n";
    }
}
void down(int n)
{
    for(int i=0; i<n; i++)
    {
        for(int j=i; j<n; j++)
        {
            cout<<"*";
        }
        cout<<"\n";
    }
}
int main()
{
    int n;
    cout<<"enter value of n:";
    cin>>n;
    up(n);
    down(n);
    return 0;
}    