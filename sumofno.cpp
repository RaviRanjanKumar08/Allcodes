#include<iostream>
using namespace std;
void sum(int n)
{
    int r,sum=0;
    while(n>0)
    {
        r=n%10;
        sum=sum+r;
        n=n/10;
    }
    cout<<"the sum whole number is:"<<sum;
}
int main()
{
    int n;
    cout<<"enter a number";
    cin>>n;
    sum(n);
    return 0;
}