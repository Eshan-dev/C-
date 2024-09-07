#include <iostream>
using namespace std;

class y;

class x
{
    friend void sum(x, y);
    int data;

public:
    setValue(int a)
    {
        data = a;
    }
};
class y
{
    friend void sum(x, y);
    int num;

public:
    setValue(int a)
    {
        num = a;
    }
};

void sum(x o1, y o2)
{
    cout << "Sum is " << (o1.data + o2.num);
}
int main()
{
    x a;
    a.setValue(34);
    y b;
    b.setValue(55);
    sum(a, b);
    return 0;
}