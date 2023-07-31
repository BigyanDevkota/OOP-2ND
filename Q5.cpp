// NESTING OF MEMBER FUNCTIONS

#include <iostream>
#include <conio.h>

using namespace std;

class total
{
    private:
    int principal,time,rate;
    float findinterest()
    {
        return principal * time * rate /100;
    }
    public:
    void setdata(float p,float t,float r)
    {
     principal = p;
     time = t;
     rate = r;
    }

    float findtotal()
    {
        return principal + findinterest();
    }
};

int main()
{
    float p,t,r,a;
    total ta;

    cout<<"Enter the value of p,t,r:"<<endl;
    cin>> p >> t >> r;
    ta.setdata(p,t,r);
    a = ta.findtotal();
    cout<<"Total Amount is:"<<a<<endl;
    getch();
    return 0;
}