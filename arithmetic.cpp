#include<iostream>
using namespace std;
int main()
{
    int a[5],sum=0;
    int n=sizeof(a)/sizeof(a[0]);
    cout<<"enter numbers:";
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        sum=sum+a[i];
    }
    float avg=sum/n;
    cout<<"the arithmetic mean is:"<<avg;
}