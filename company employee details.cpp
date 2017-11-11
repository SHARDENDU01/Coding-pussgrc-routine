#include <iostream>
#include<stdio.h>

using namespace std;

struct emp
{
    int emp_no;
    char name[30];
    double salary;
};
void ReadEmp(emp &e)
{
    cout<<"\nEnter employee no.:\t";
    cin>>e.emp_no;
    cout<<"\nEnter employee name:\t";
    cin>>e.name;
    cout<<"\n Enter employee salary:\t";
    cin>>e.salary;
}

void ShowEmp(emp e)
{
    cout<<"Employee Details:\n";
    cout<<"Emp no:\t"<<e.emp_no<<endl;
    cout<<"Name:\t"<<e.name<<endl;
    cout<<"Salary:\t"<<e.salary<<endl;
}
int main()
{
    emp e1;
    ReadEmp(e1);
    ShowEmp(e1);
    return 0;
}
