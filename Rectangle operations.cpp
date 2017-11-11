#include <iostream>
#include<math.h>
#include<stdlib.h>
#include<stdio.h>
using namespace std;

int main()
{
    char ch,ch1;
    float l,b,pm,area,diag;
    do
    {
        system("cls");
        cout<<"\nRectangle menu";
        cout<<"\n1. Area";
        cout<<"\n2. Perimeter";
        cout<<"\n3. Diagonal";
        cout<<"\n2. Exit\n";
        cout<<"Enter your choice:\t";
        cin>>ch;
        if(ch==1||ch==2||ch==3)
        {
            cout<<"Enter length and breadth:";
            cin>>l>>b;
        switch(ch)
        {
            case '1':   area=l*b;
                        cout<<"Area:\t"<<area<<endl;
                        break;
            case '2':   pm=2*(l+b);
                        cout<<"Perimeter:\t"<<pm<<endl;
                        break;
            case '3':   diag=sqrt(l*l+b*b);
                        cout<<"Diagonal:\t"<<diag<<endl;
                        break;
            case '4':   break;

            default :   cout<<"Entered a Wrong Choice!!!\n";
        }
        }
        cout<<"press a key to continue.....\n";
        ch1=getchar();
    }while(ch >='1'&& ch <='3');

    return 0;
}

