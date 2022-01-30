#include<iostream>
using namespace std;
int len(char*p)
{ 
    int i;
    for(i=0; *(p+i)!='\0'; i++);
    return i;
}
char*rev(char*p)
{
    int i,l;
    char temp;
    for(l=0; *(p+l)!='\0'; l++);
    for(i=0; i<l/2; i++)
    {
        temp=*(p+i);
        *(p+i)=*(p+l-1-i);
        *(p+l-1-i)=temp;
    }
    return p;
}
int main()
{
    char s[100];
    cout<<"enter strings:";
    gets(s);
    cout<<"the length of string is:"<<len(s);
    cout<<"\nthe rev of string is:"<<rev(s);
    return 0;
}
