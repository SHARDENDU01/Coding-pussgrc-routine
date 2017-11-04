#include<iostream.h>
#include<conio.h>
void main()
{
 int a=1,b=2;
 clrscr();
 cout<<"Values of a and b before swap:\t"<<a<<"and \t"<<b;
 swap(a,b);
 cout<<"Values of a and b after swap:\t"<<a<<"and \t"<<b;
 getch();
}
void swap(int a,int b)
{
 int temp;
 temp=a;
 a=b;
 b=temp;
}

