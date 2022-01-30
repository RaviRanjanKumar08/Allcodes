#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int n;
    cout<<"enter value:";
    cin>>n;
    if(n<42)
    {
        cout<<"AGC";
        cout<<setfill('0')<<setw(3)<<n;
    }
    else
    {
        n++;
        cout<<"AGC";
        cout<<setfill('0')<<setw(3)<<n;
    }
    return 0;
}