#include <iostream>

using namespace std;

class outer
{
    int a;
    class inner
    {
        int b;
    public:
        int c;
        void prn(void)
        {

            cout<<endl<<"Inner::prn()"<<endl;
            cout<<b<<' '<<c<<endl;
        }
        inner()
        {
            b=5;
            c=10;
        }
    };
    inner ob1;
    public:
        inner ob2;
        void second(void)
        {
            cout<<endl<<"outer::second()"<<endl;
            cout<<ob2.c<<endl;
            cout<<"A="<<a<<endl;
            ob1.prn();
        }
        outer()
        {
            a=25;
        }
};

int main()
{
    outer ab;
    ab.second();
    ab.ob2.prn();
    return 0;
}
