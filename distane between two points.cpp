#include <iostream>
#include<stdlib.h>
#include<math.h>

using namespace std;

int main()
{
  system("cls");
  double distance,x1,y1,x2,y2;
  cout<<"Enter coordinates(x,y) of point 1:\t";
  cin>>x1>>y1;
cout<<"Enter coordinates(x,y) of point 2:\t";
  cin>>x2>>y2;
  distance=sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
  cout<<"The distance between point is:\t"<<distance;
}

