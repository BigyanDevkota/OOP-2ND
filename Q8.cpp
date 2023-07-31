// OVERLOADING NEGATION OPERATOR

#include <iostream>
#include <conio.h>

using namespace std;

class point
{
private:
    int x,y;

public:

    void getdata()
    {
        cout << "Enter x and y coordinate"<<endl;
        cin>> x >>y;
    }

    void display()
    {
        cout<<"("<<x<<","<<y<<")"<<endl;
        cin>>x>>y;
    }
    point operator-()
    {
        point t;
        t.x = -x;
        t.y = -y;
        return t;
    }
};

int main()
{
    point p,q;
    p.getdata();
    q=-p;
    cout<<"q=";
    q.display();
    getch();
    return 0;
}