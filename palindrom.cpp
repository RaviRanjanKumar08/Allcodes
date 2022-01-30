#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void palindrome(int n)
{
    int p=n;
    int r,rev;
    while(n>0)
    {
        r=n%10; 
        rev=rev*10+r;
        n=n/10;
    }
    if(p==rev)
    {
        cout<<"then the no. is palindrome";
    }
    else{
        cout<<"number is not palindrome";
    }
}
int main()
{
    int n;
    cout<<"enter a no.";
    cin>>n;
    palindrome(n);
    return 0;
}
