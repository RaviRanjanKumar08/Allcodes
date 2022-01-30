#include<iostream>
using namespace std;
void bitwise(int n, int k)
{
    int a=0,b=0,c=0;
    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            int x,y,z;
            x=i&j;
            y=i^j;
            z=i|j;
            if(x>a&&x<k)
            {
                a=x;
            }
            if(y>b&&y<k)
            {
                b=y;
            }
            if(z>c&&z<k)
            {
                c=z;
            }

        }
    }
    cout<<"the all bitwise operator is:"<<a<<"\t"<<b<<"\t"<<c;
}
int main()
{
    int n,k;
    cout<<"enter number:";
    cin>>n>>k;
    bitwise(n,k);
    return 0;
}