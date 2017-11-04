#include<iostream.h>                      //header file input-output stream used for cout,cin and cerr. 
#include<conio.h>                         //header file having clrscr() and getch(). 

void swap(int a,int b)                //swap function to change the value.
{
 int temp;                             //logic for swapping the value.     
 temp=a;
 a=b;
 b=temp;
}

void main()                   //main body starts
{
 int a=1,b=2;
 clrscr();
 cout<<"Values of a and b before swap:\t"<<a<<"and \t"<<b;
 swap(a,b);
 cout<<"Values of a and b after swap:\t"<<a<<"and \t"<<b;
 getch();
}

