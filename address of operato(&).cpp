#include <iostream>

using namespace std;

int main()
{
    int m=800;
    int &n=m;
    cout<< "Actual variable value:\t"<<m<< endl;
    cout<< "Formal variable value:\t"<<n<< endl;
    cout<<"Memory address of actual and formal parameters:\t"<<&m<<" and "<<&n;
    return 0;
}
