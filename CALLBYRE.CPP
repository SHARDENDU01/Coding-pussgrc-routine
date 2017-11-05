#include<iostream.h>
#include<conio.h>
void swap(int &a,int &b)
{
 int temp;
 temp=a;
 a=b;
 b=temp;
}
void main()
{
 int a,b;
 clrscr();
 cout<<"Enter trhe value of a and b:\t";
 cin>>a>>b;
 cout<<"The value of a before swap: \t"<<a<<endl;
 cout<<"The value of b before swap: \t"<<b<<endl;
 swap(a,b);
 cout<<"The value of a after swap: \t"<<a<<endl;
 cout<<"The value of b after swap: \t"<<b<<endl;
 getch();
}
