#include <iostream>
using namespace std;

class complex
{
    int a, b;

public:
    complex()
    {
        a = 0;
        b = 0;
    }
    complex(int x)
    {
        a = x;
        b = 0;
    }
    complex(int x, int y)
    {
        a = x;
        b = y;
    }
    void display(){
        cout<<"Number is "<<a<<"+"<<b<<"i"<<endl;
    }
};
int main()
{
    complex a;
    a.display();
    complex b(34);
    b.display();
    complex c(3,7);
    c.display();
    return 0;
}