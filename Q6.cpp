// OVERLOADING PRE-INCREMENT OPERATOR

#include <iostream>
#include <conio.h>

using namespace std;

class rectangle
{
private:
int length,breadth;
public:
rectangle(int l,int b)
{
    length = l;
    breadth = b;
}
void operator ++()
{
    ++length;
    ++breadth;
}
void display()
{
    cout<<"length="<<length<<endl<<"breadth="<<breadth;
}
};

int main()
{
    rectangle r1(5,6);
    ++r1;
    r1.display();
    getch();
    return 0;
}