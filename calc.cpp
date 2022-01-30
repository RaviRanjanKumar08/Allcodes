#include<iostream>
using namespace std;
void sum(int a, int b)
{
    int c=a+b;
    cout<<"the sum is:"<<c;
}
void mul(int a, int b)
{
    int c=a*b;
    cout<<"the multiply is:"<<c;
}
void sub(int a, int b)
{
    int c=a-b;
    cout<<"the subtraction is:"<<c;
}
void divi(int a, int b)
{
    float c=a/b;
    cout<<"the divide is:"<<c;
}
void mod(int a, int b)
{
    int c=a%b;
    cout<<"the modulus is:"<<c;
}
int fact(int n)
{
    if(n>0)
    {
        return n*fact(n-1);
    }
    else
    {
        return 1;
    }
}
int main()
{
    char n;
    cout<<"choose among +,*,-,/,%,!:\n";
    cin>>n;
    if(n=='+')
    {
        int a,b;
        cout<<"enter value of a and b:";
        cin>>a>>b;
        sum(a,b);
    }
    if(n=='*')
    {
        int a,b;
        cout<<"enter value of a and b:";
        cin>>a>>b;
        mul(a,b);
    }
    if(n=='-')
    {
        int a,b;
        cout<<"enter value of a and b:";
        cin>>a>>b;
        sub(a,b);
    }
    if(n=='/')
    {
        int a,b;
        cout<<"enter value of a and b:";
        cin>>a>>b;
        divi(a,b);
    }
    if(n=='%')
    {
        int a,b;
        cout<<"enter value of a and b:";
        cin>>a>>b;
        mod(a,b);
    }
    if(n=='!')
    {
        int n;
        cout<<"enter value of n";
        cin>>n;
        cout<<"the fact of a no. is:"<<fact(n);
    }
}