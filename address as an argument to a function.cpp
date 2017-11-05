#include <iostream>
#include<math.h>
using namespace std;
void area_peri(float,float,float,float &A,float &P);

int main()
{

    float x,y,z,area,peri;
    cout<<"Enter the sides:"<<endl;
    cin>>x>>y>>z;
    area_peri(x,y,z,area,peri);
    cout<<"Area of triangle is:\t"<<area<<endl;
    cout<<"Perimeter of triangle is:\t"<<peri<<endl;
    return 0;
}


void area_peri(float a,float b,float c,float &A,float &P)
{
    float s,m;
    s=(a+b+c)/2;
    A=sqrt((s-a)*(s-b)*(s-c));
    P=a+b+c;
}
