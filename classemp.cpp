#include<iostream>
using namespace std;
class emp
{
    public:
        int id;
        string name;
        float sal;
        int depid;
    
};
emp set()
{
    emp e1;
    cout<<"enter employee details:";
    cin>>e1.id>>e1.name>>e1.sal>>e1.depid;
    return e1;
}
void show(emp e)
{
    cout<<"Employee id:"<<e.id<<"\tEmployee Name:"<<e.name<<"\tEmployee Salary:"<<e.sal<<"\tEmployee dept."<<e.depid;
}

int main()
{
    emp e1;
    cout<<"enter details:";
    e1=set();
    show(e1);
    return 0;
}