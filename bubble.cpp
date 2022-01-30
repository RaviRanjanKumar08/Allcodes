#include<iostream>
using namespace std;
void swap(int *p, int *x)
{
    int t;
    t=*p;
    *p=*x;
    *x=t;
}
void bubble(int a[], int n)
{
    int i,r;
    for(r=1; r<n; r++)
    {
        for(i=0; i<n-r; i++)
        {
            if(a[i]>a[i+1])
            {
                swap(&a[i],&a[i+1]);
            }
        }
    }
}
void print(int a[], int n)
{
    cout<<"the sorted array is:";
    for(int i=0; i<n; i++)
    {
        cout<<a[i]<<"\t";
    }
}
int main()
{
    int a[5];
    int n=sizeof(a)/sizeof(a[0]);
    cout<<"enter elements of array:\n";
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }    
    bubble(a,n);
    print(a,n);
    return 0;
}