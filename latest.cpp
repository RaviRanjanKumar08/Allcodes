#include<iostream>
using namespace std;
class complex
{
    int a, b;
    public:
     void set(int x, int y)
     {
         a=x; b=y;
     }
     void show()
     {
         cout<<"a="<<a<<"\nb="<<b;
     }
     complex sum(complex c)
     {
         complex temp;
         temp.a=a+c.a;
         temp.b=b+c.b;
         return temp;

     }
     friend complex sub(complex, complex);
     friend complex operator*(complex, complex);
     complex increment(void);
    
};
complex complex::increment(void)
{
    complex temp;
    temp.a=++a;
    temp.b=++b;
    return temp;
}

complex operator*(complex x, complex y)
{
    complex temp;
    temp.a=x.a*y.a;
    temp.b=x.b*y.b;
    return temp;
}
complex sub(complex x, complex y)
{
    complex temp;
    temp.a=x.a-y.a;
    temp.b=x.b-y.b;
    return temp;

}
int main()
{
    complex c1,c2,c3;
    c1.set(8,7);
    c2.set(7,4);
    c3=c1.sum(c2);
    cout<<"for sum:";
    c3.show();
    c3=sub(c1,c2);
    cout<<"\nfor sub:";
    c3.show();
    c3=operator*(c1,c2);
    cout<<"\nfor multiplication:";
    c3.show();
    c3=c1.increment();
    cout<<"\nfor increment:";
    c3.show();
    
}