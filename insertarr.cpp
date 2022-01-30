#include<iostream>
using namespace std;
void display(int a[], int size)
{
    for(int i=0; i<size; i++)
    {
        cout<<a[i]<<"\t";
    }
}
int insert(int a[], int size, int elem, int index, int cap)
{
    if(size>=cap){
        return -1;
    }
    for(int i=size-1; i>=index; i--)
    {
        a[i+1]=a[i];
    }
    a[index]=elem;
    return 1;
}
int main()
{
    int a[10]={12,33,44,55,66};
    int size=5, elem=10, index; 
    cout<<"enter index:";
    cin>>index;
    insert(a,size,elem, index, 10);
    size++;
    display(a, size);
    return 0;
}