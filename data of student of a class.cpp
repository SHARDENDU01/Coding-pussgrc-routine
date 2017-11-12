#include <iostream>
#include<stdlib.h>

using namespace std;

class student
{
    int rollno;
    char name[25];
    float marks;
    char grade;
public:
    void Readdata()
    {
        cout<<"\n Enter roll no:\t";
        cin>>rollno;
        cout<<"\n Enter Name:\t";
        cin>>name;
        cout<<"\n Enter Marks:\t";
        cin>>marks;
    }
    void Displaydata()
    {
        calcgrade();
        cout<<"\nRoll No.:\t"<<rollno<<endl;
        cout<<"\nName:\t"<<name<<endl;
        cout<<"\nMarks:\t"<<marks<<endl;
        cout<<"\nGrade:\t"<<grade<<endl;
    }
    int getrollno()
    {
        return rollno;
    }
    float getmarks()
    {
        return marks;
    }
    void calcgrade()
    {
        if(marks >=75)
            grade='O';
        else if(marks >=60)
            grade='A';

        else if(marks >=50)
            grade='B';
        else if(marks >=40)
            grade='C';
        else
            grade='F';

    }
};

int main()
{
    student a[10];
    for(int i=0;i<10;i++)
    {
        cout<<"\nEnter details of student "<<i+1<<":";
        a[i].Readdata();
    }
    int choice,rno,pos=-1,highmarks=0;
    do
    {
        cout<<"\n\nMain Menu\n";
        cout<<"1.Specific Student \n";

        cout<<"2.Topper\n";
        cout<<"3.Exit \n";
        cout<<"\nEnter your choice(1-3):\t";
        cin>>choice;
        switch(choice)
        {
            case 1:     cout<<"\n Enter roll no of the student whose details you want to see:\t";
                        cin>>rno;
                        for(int i=0;i<10;++i)
                        {
                                if(a[i].getrollno()==rno)
                                {

                                    a[i].Displaydata();
                                    break;
                                }
                        }
                        break;
            case 2:     for(int i=0;i<10;i++)
                        {
                                if(a[i].getmarks()> highmarks)
                                {
                                    pos=i;
                                    highmarks=a[i].getmarks();
                                }
                        }
                        a[pos].Displaydata();
                        break;
            case 3:     break;
            default:    cout<<"\nWRONG CHOICE!!!\n";
                        break;
        }
    }while(choice >=1 &&choice<3);
    return 0;
}
