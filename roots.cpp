#include<iostream>
using namespace std;
int main()
{
    int a,b,c,d;
    cout<<"enter coefficient of ax2+bx+c:";
    cin>>a>>b>>c;
    d=b^2-4*a*c;
    if(d>0)
    {
        cout<<"\nroot is possible";
    }
    else
    {
        cout<<"\nroot is not possible";
    }
}