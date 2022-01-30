#include<iostream>
using namespace std;
class complex
{
    int a,b;
    public:
    void set(int x, int y)
    {
        a=x;b=y;
    }
    void show()
    {
        cout<<"\na="<<a<<"\nb="<<b;
    }
    complex sum(complex c)
    {
        complex temp;
        temp.a=a+c.a;
        temp.b=b+c.b;
        return temp;
    }
    complex mul(complex);
    friend complex operator-(complex,complex); //function declaration
    friend complex div(complex,complex); //this one is for to use class's members without using ::operator
};
complex div(complex x,complex y)
{
    complex temp;
    temp.a=x.a/y.a;
    temp.b=x.b/y.b;
    return temp;
}
complex operator-(complex x, complex y)
{
    complex temp;
    temp.a=x.a-y.a;
    temp.b=x.b-y.b;
    return temp;
}
complex complex::mul(complex c)
{
    complex temp;
    temp.a=a*c.a;
    temp.b=b*c.b;
    return temp;
}
int main()
{
    complex c1, c2,c3;
    cout<<"enter values\n";
    c1.set(480,49);
    c2.set(10,7);
    c3=c1.sum(c2);
    cout<<"\nfor sum\n";
    c3.show();
    c3=c1.mul(c2);
    cout<<"for mul\n";
    c3.show();
    c3=c1-c2;
    cout<<"\nfor subtract";
    c3.show();
    c3=div(c1,c2);
    cout<<"\n for divide\n";
    c3.show();
    return 0;
}    