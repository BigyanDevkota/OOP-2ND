// A COMPLETE PROGRAM USING CLASS

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
        length=l;
        breadth=b;
    }
    void showdata()
    {
        cout<<"length="<<length<<endl<<"breadth="<<breadth<<endl;
    }
    int findarea()
    {
        return length*breadth;
    }
    int findPerimeter()
    {
        return 2*(length+breadth);
    }
};

int main()
{
    rectangle r;
    r.setdata(4,2);
    r.showdata();
    cout<<"area="<<r.findarea()<<endl;
    cout<<"perimeter="<<r.findPerimeter();
    getche();
    return 0;
}