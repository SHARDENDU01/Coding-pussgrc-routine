#include <iostream>

using namespace std;

int average(int a,int b)
{
    return (a+b)/2;
}
float average(float a,float b)
{
    return (a+b)/2;
}
int average(int a,float b)
{
    return (a+b)/2;
}

int main()
{
    int x=5,y=10;
    cout<<"The value of x:\t"<<x<<endl;
    cout<<"The value of y:\t"<<y<<endl;
    cout<<"Average value of two integer data type:\t"<<average(x,y)<<endl;
    cout<<"Average value of one integer and one float data type:\t"<<average(float(x),float(y))<<endl;
    cout<<"Average value of one integer and one float data type:\t"<<average(x,float(y))<<endl;
    return 0;
}
