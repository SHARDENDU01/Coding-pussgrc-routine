#include <iostream>
#include<stdlib.h>

using namespace std;

int main()
{
    system("cls");
    int sales[5][12];
    int i,j,total;
    for(i=0;i<2;i++)
    {
        total=0;
        cout<<"Enter sales for Salesman:\t"<<i+1<<endl;
        for(j=0;j<3;j++)
        {
            cout<<"\nMonth:\t"<<j+1<<endl;
            cin>>sales[i][j];
            total=total +sales[i][j];
            cout<<"\n";
        }
    cout<<"\n";
    cout << "Total Sales of Salesman "<<i+1<<":"<<total<<endl;
    }
    return 0;
}
