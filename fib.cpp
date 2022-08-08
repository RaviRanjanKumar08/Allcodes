#include<iostream>
using namespace std;
int fib(int n)
{
    if(n==0)
    {
        return 0;
    }
    if(n==1)
    {
        return 1;
    }
    else 
    {
        return fib(n-1)+fib(n-2);
    }
}
int main()
{
    int n;
    cout<<"enter the value of n:";
    cin>>n;
    int i;
    cout<<"\nthe series is:";
    for(i=0; i<n; i++)
    {
        cout<<fib(i)<<"\t";
    }
}