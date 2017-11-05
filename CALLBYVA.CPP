#include<iostream.h>
#include<conio.h>
void main()
{
 int a,b;
 clrscr();
 cout<<"Enter the values of a and b:\t";
 cin>>a>>b;
 cout<<"Values before swap:\n\t";
 cout<<"Value of a:\t"<<a;
 cout<<"\tValue if b:\t"<<b;
 a=a+b;
 b=a-b;
 a=a-b;
 cout<<"\nValues after swap:\n\t";
 cout<<"Value of a:\t"<<a;
 cout<<"\tValue if b:\t"<<b;
 getch();
}

