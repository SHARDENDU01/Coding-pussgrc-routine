#include <iostream>
#include<stdio.h>
using namespace std;

int main()
{
  char ch;
  do
  {
      cout<<"Enter a character:\t";
      ch=getchar();
      if(ch=='\n')
        ch=getchar();
      cout<<endl;
      if(ch >= 65 && ch<=90)
        ch=ch+32;
      else
        if(ch >=97 && ch<=122)
            ch=ch-32;
      cout<<"\n";
    cout<<"\n"<<putchar(ch);
  }while(ch!='0');
  return 0;

  }
