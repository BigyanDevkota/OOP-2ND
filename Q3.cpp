// POINTER TO CLASSESS

#include <iostream>
#include <conio.h>

using namespace std;


class item
{
    int code,price;
    public:
    void getdata()
    {
     cout<<"Enter code and price:"<<endl;  
     cin>>code>>price; 
    }

    void showdata()
    {
        cout<<"code="<<code<<endl;
        cout<<"price="<<price<<endl;
    }
};

int main()
{
    item *a=new item(); // pointer object
    item b;
    a->getdata();
    b.getdata();
    cout<<"------Item details------"<<endl;
    cout<<"first item:"<<endl;
    a->showdata();
    cout<<"second item:"<<endl;
    b.showdata();
    getch();
    return 0;
}