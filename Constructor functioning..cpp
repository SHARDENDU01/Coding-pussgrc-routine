#include <iostream>
#include<stdlib.h>

using namespace std;

class subject
{
    int days;
    int subjectno;
public:
    subject(int d=123,int sn=101);
    void printsub(void)
    {
        cout<<"Subject No:\t"<<subjectno;
        cout<<"\nDays:\t"<<days<<"\n";
    }
};

subject::subject(int d,int sn)
{
    cout<<"Constructing Subject\n";
    days=d;
    subjectno=sn;
}

class student
{
    int rollno;
    float marks;
public:
    student()
    {
        cout<<"Constructing Student\n";
        rollno=0;
        marks=0.0;
    }
    void getval(void)
    {
        cout<<"Enter roll number and marks:\t";
        cin>>rollno>>marks;
        cout<<"\n";
    }
    void print(void)
    {
        cout<<"\nRoll No:\t"<<rollno;
        cout<<"\nMarks:\t"<<marks<<endl;
    }
};

class admission
{
    subject sub;
    student stud;
    float fees;
public:
    admission()
    {
        cout<<"Constructing Admission\n";
        fees=0.0;
    }
    void print(void)
    {
        stud.print();
        sub.printsub();
        cout<<"Fees:\t"<<fees<<"\n";
    }
};

int main()
{
    system("cls");
    admission adm;
    cout<<"\nBack to main()\n";
    return 0;
}
