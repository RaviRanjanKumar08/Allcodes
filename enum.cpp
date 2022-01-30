#include<iostream>
using namespace std;
typedef enum
{
    True, False
}result;
result isarm(int n)
{
    int r,s=0,p;
    p=n;
    while(n>0)
    { 
        r=n%10;
        s=s+(r*r*r);
        n=n/10;
    }
    if(s==p)
    {
        return True;
    }
    else{
        return False;
    }
}
int main()
{
    int n;
    result R;
    cout<<"enter a number:";
    cin>>n;
    R=isarm(n);
    if(R==True)
    {
        cout<<"the number is armstrong";
    }
    if(R==False)
    {
        cout<<"the number is not armstrong";
    }
    return 0;
}