#include <iostream>
#include<stdlib.h>
using namespace std;
int main()
{
    system("cls");
    float large(float arr[],int n);
    char ch;
    int i=0;
    float amount[50],biggest;
    for(i=0;i<50;++i)
    {
        cout<<"Enter element no. "<<(i+1)<<endl;
        cin>>amount[i];
        cout<<"More elements?(y/n)\n";
        cin>>ch;
        if(ch!='y')
           break;
    }
    if(i<50)
        i++;
    biggest=large(amount,i);
    cout<<"The largest element of the array is:\t"<<biggest<<endl;
    return 0;
}

float large(float arr[],int n)
{
    float max=arr[0];
    for(int j=1;j<n;j++)
    {
        if(arr[j]>max)
            max=arr[j];
    }
    return max;
}

