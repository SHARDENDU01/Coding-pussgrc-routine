#include <iostream>

using namespace std;

int main()
{
    int choice;
    float temp,countemp;
    cout<<"Temperature Conversion Choice:\n";
    cout<<"1.Fahrenheit to Celsius\n";
    cout<<"2.Celsius to Fahrenheit\n";
    cout<<"ENTER YOUR CHOICE:\t";
    cin>>choice;
    if(choice==1)
    {
        cout<<"\nEnter temperature in Fahrenheit:\t";
        cin>>temp;
        countemp=(temp-32)/1.8;
        cout<<"The Temperature in Celsius is:\t"<<countemp<<endl;
    }
    else
    {
        cout<<"\nEnter temperature in Celsius:\t";
        cin>>temp;
        countemp=1.8*temp+32;
        cout<<"The Temperature in Fahrenheit is:\t"<<countemp<<endl;

    }
    return 0;
}
