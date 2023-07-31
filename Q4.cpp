// ARRAY OF OBJECTS

#include <iostream>
#include <conio.h>

using namespace std;

const int MAX=100;

class employee
{
    private:
    int salary,id;
    public:
    void getdata()
    {
     cout<<"Enter the ID:"<<endl;  
     cin>>id;
     cout<<"Enter the salary:"<<endl;  
     cin>>salary;
    }

    void putdata()
    {
        cout<<"\tID:"<<id<< "\tSalary:"<<salary<<endl;
    }
};

int main()
{
    employee e[MAX];
    int n=0;
    char ans;
    do
    {
    cout<<"Enter the employee number::"<<n+1<<endl;
    e[n++].getdata();
    cout<<"Enter another(y/n)?:"<<endl;
    cin>> ans;
    } while (ans!='n');
    
    cout<<"------Employee details------"<<endl;
    for ( int j = 0; j < n; j++)
    {
       cout<<"\nEmployee Number is::"<<j+1;
       e[j].putdata();
    }
    getch();
    return 0;
}