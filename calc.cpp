#include<iostream>
using namespace std;
long long int fact(int n)
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
int fib(int n)
{
    if(n==0)
        return 0;
    if(n==1)
        return 1;
    else
    {
        return fib(n-1)+fib(n-2);
    }
}
void sum(int a, int b)
{
    int c;
    c=a+b;
    cout<<"the sum of the numbers are:"<<c;   
}
void sub(int a, int b)
{
    int c;
    c=a-b;
    cout<<"the sub of the numbers are:"<<c;
}
void mul(int a, int b)
{
    int c;
    c=a*b;
    cout<<"the mul of the numbers are:"<<c;
}
void divi(int a, int b)
{
    int c;
    c=a/b;
    cout<<"the division of the numbers are:"<<c;
}
void mod(int a, int b)
{
    int c;
    c=a%b;
    cout<<"the modulus of the numbers are:"<<c;
}
int main()
{
    char choice;
    cout<<"enter choices among:+, -, *, /, %, ^, #\n";
    cin>>choice;
    if(choice=='+')
    {
        int a,b;
        cout<<"enter the value of a and b:";
        cin>>a>>b;
        sum(a,b);
    }
    if(choice=='-')
    {
        int a,b;
        cout<<"enter the value of a and b:";
        cin>>a>>b;
        sub(a,b);
    }
    if(choice=='*')
    {
        int a,b;
        cout<<"enter the value of a and b:";
        cin>>a>>b;
        mul(a,b);
    }
    if(choice=='/')
    {
        int a,b;
        cout<<"enter the value of a and b:";
        cin>>a>>b;
        divi(a,b);
    }
    if(choice=='%')
    {
        int a,b;
        cout<<"enter the value of a and b:";
        cin>>a>>b;
        mod(a,b);
    }
    if(choice=='^')
    {
        int n;
        cout<<"enter the value of n:";
        cin>>n;
        cout<<"the factorial is:"<<fact(n);

    }
    if(choice=='#')
    {
        int n,i;
        cout<<"enter the value of n:\n";
        cin>>n;
        cout<<"\nthe fibonacci series is:";
        for(i=0; i<n; i++)
        {
            cout<<fib(i)<<"\t";
        }
    }
}
