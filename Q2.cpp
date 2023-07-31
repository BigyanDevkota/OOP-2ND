// DEFINING MEMBER FUNCTIONS

#include <iostream>
#include <conio.h>

using namespace std;


class rectangle
{
    private:
    int length,breadth;

    public:
    void setdata(int l,int b)
    {
        // method definition inside the class
        length=l;
        breadth=b;
    }
    void showdata();
    int findarea();
    int findperimeter();
};

    void rectangle::showdata()
    {
        // method definition outside the class
        cout<<"length="<<length<<endl<<"breadth="<<breadth<<endl;
    }
    int rectangle::findarea()
    {
        return length*breadth;
    }
    int rectangle::findperimeter()
    {
        return 2*(length+breadth);
    }

int main()
{
    int a,p;
    rectangle r;
    r.setdata(4,5);
    r.showdata();
    a=r.findarea();
    cout<<"area="<<a<<endl;
    p=r.findperimeter();
    cout<<"perimeter="<<p<<endl;
    getch();
    return 0;
}