#include<iostream>
using namespace std;
int main()
{
    int y;
    cout<<"enter year:";
    cin>>y;
    if(y%100==0||y%4==0)
    {
        cout<<"year entered is leap year";
    }
    else
    {
        cout<<"year entered is not leap year";
    }
}