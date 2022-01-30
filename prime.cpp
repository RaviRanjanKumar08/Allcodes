#include<iostream>
using namespace std;
int main()
{
    int n,count=0;
    cout<<"enter a number";
    cin>>n;
    for(int i=2; i<=n; i++)
    {
        if(n%i==0)
        {
            count++;
        }  
    }
    if(count==1)
    {
        cout<<"number is prime";
    }
    else
    {
        cout<<"number is not prime";
    }
}