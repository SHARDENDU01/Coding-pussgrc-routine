#include <iostream>

using namespace std;

class student
{
    private:
        int n1,n2,n3;
    public:
        void Enterdata(int m1,int m2,int m3);
        void display(student o1);
};

void student::Enterdata(int m1,int m2,int m3)
{
    n1=m1;
    n2=m2;
    n3=m3;

}

void student::display(student o1)
{
    cout<<"Marks of First Student:"<<o1.n1<<endl;
    cout<<"Marks of Second Student:"<<o1.n2<<endl;
    cout<<"Marks of Third Student:"<<o1.n3<<endl;
}

int main()
{
    student s1,s2;
    s1.Enterdata(50,60,70);
    s1.display(s1);
    s2.Enterdata(80,90,100);
    s2.display(s2);
    return 0;
}
