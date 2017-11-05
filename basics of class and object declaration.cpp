#include <iostream>

using namespace std;

class student
{
    int n1,n2,n3,n4,n5;
public:
    void Enterdata(int m1,int m2,int m3,int m4,int m5)
    {
        n1=m1;
        n2=m2;
        n3=m3;
        n4=m4;
        n5=m5;
    }
    void display();
};
int main()
{
    student s1,s2;
    s1.Enterdata(10,20,30,40,50);
    s1.display();
    s2.Enterdata(60,70,80,90,100);
    s2.display();
    return 0;
}

void student::display()
{
        cout<<"Marks in first is:\t"<<n1<<endl;
        cout<<"Marks in second is:\t"<<n2<<endl;
        cout<<"Marks in third is:\t"<<n3<<endl;
        cout<<"Marks in fourth is:\t"<<n4<<endl;
        cout<<"Marks in fifth is:\t"<<n5<<endl;
}
