#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s[200];
    int vow=0,con=0;
    cout<<"enter strings\n";
    gets(s);
    for(int i=0; s[i]!='\0'; i++)
    {
        if(s[i]>='a'&&s[i]<='z'||s[i]>='A'&&s[i]<='Z')
        {
            if(s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'||s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
            {
                vow++;
            }
            else
            {
                con++;
            }
        }
    }
    cout<<"the no. of vowels are:"<<vow<<" and the no. of consonants are:"<<con;
}