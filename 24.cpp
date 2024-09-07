#include <iostream>
using namespace std;

class employee
{
    int id;
    static int counter;

public:
    void setdata();
    void getdata();
    static void getcount();
};

int employee ::counter;

void employee::setdata()
{
    cout << "Enter ID of Employee ";
    cin >> id;
    cout << endl;
    counter++;
}

void employee::getdata()
{
    cout << "ID of Employee is " << id << endl;
}

void employee::getcount()
{
    cout << "This is Employee number " << counter << endl
         << endl;
}

int main()
{

    employee harry;
    employee garry;
    employee larry;

    harry.setdata();
    harry.getdata();
    employee ::getcount();

    garry.setdata();
    garry.getdata();
    employee ::getcount();

    larry.setdata();
    larry.getdata();
    employee ::getcount();

    return 0;
}