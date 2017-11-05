#include <iostream>
using namespace std;
inline float convert(float temp)
{
    return ((9/5)*(temp-32));
}
int main()
{
    float Temp[10];
    cout<<"Enter the temperature in degree F:\n";
    for(int i=0;i<10;i++)
    {
        cin>>Temp[i];
        cout<<"Temperature in degree C:\n";
        cout<<convert(Temp[i])<<"\n";
    }
    return 0;
}
