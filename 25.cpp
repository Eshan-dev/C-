#include <iostream>
using namespace std;

class complex
{
    int a, b;

public:
    void setdata(int r, int i)
    {
        a = r;
        b = i;
    }
    void display()
    {
        cout << "Complex number is " << a << "+" << b << "i" << endl;
    }
    void setsum(complex c1, complex c2)
    {
        a = c1.a + c2.a;
        b = c1.b + c2.b;
    }
};
int main()
{
    complex comp1, comp2, compsum;

    comp1.setdata(3, 5);
    comp1.display();

    comp2.setdata(4, 8);
    comp2.display();

    compsum.setsum(comp1, comp2);
    compsum.display();
    return 0;
}