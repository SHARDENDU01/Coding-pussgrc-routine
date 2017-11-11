#include <iostream>
#include<stdlib.h>

using namespace std;

int main()
{
    system("cls");
    void change(int);
    int orig=10;
    cout<<"The original value is:\t"<<orig<<endl;
    change(orig);
    cout<<"Value after change() is over:\t"<<orig<<endl;
    return 0;
}

void change(int orig)
{
    orig=20;
    cout<<"Value of orig in function change() is:\t"<<orig<<endl;
}
