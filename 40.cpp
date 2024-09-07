#include <iostream>
using namespace std;

class student
{
protected:
    int roll_number;

public:
    void set_roll_number(int);
    void get_roll_number(void);
};

void student ::set_roll_number(int r)
{
    roll_number = r;
}

void student ::get_roll_number(void)
{
    cout << "Roll Number of Student is " << roll_number << endl;
}

class exam : public student
{
protected:
    float physics;
    float chemistry;
    float math;

public:
    void set_marks(float, float, float);
    void get_marks(void);
};

void exam ::set_marks(float p, float c, float m)
{
    physics = p;
    chemistry = c;
    math = m;
}

void exam ::get_marks()
{
    cout << "Marks of Student in Physics is " << physics << endl;
    cout << "Marks of Student in Chemistry is " << chemistry << endl;
    cout << "Marks of Student in Maths is " << math << endl;
}

class result : public exam
{
protected:
    float percentage;
    void set_result(void);

public:
    void get_result(void);
};

void result ::set_result()
{
    percentage = (physics + chemistry + math) / 3;
}

void result ::get_result()
{
    get_roll_number();
    get_marks();
    set_result();
    cout << "Percentage of student is " << percentage << "%" << endl;
}

int main()
{
    result eshan;
    eshan.set_roll_number(420);
    eshan.set_marks(87.0, 95.0, 89.0);
    eshan.get_result();
    return 0;
}