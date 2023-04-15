#include <iostream>
using namespace std;

class student
{
protected:
    int roll_number;

public:
    void setRoll(int);
    void getRoll();
};

void student ::setRoll(int r)
{
    roll_number = r;
}

void student::getRoll()
{
    cout << "the roll number is: " << roll_number << endl;
}

class exam : public student
{
protected:
    float maths;
    float physics;

public:
    void setmarks(float, float);
    void getmarks();
};

void exam::setmarks(float m1, float m2)
{
    maths = m1;
    physics = m2;
}

void exam::getmarks()
{
    cout << "the maths marks are: " << maths << endl;
    cout << "the physics marks are: " << physics << endl;
}

class result : public exam
{
    float percentage;

public:
    void display()
    {
        getRoll();
        getmarks();
        cout << "your percentage is : " << (maths + physics) / 2 << "%" << endl;
    }
};
/*
Notes:
    if we ar einheriting B from A and C from B: [A-->B-->C]
    1. A is base class for B and B is base class is C
    2. A-->B-->C is called inheritance path
 */
int main()
{
    result arry;
    arry.setRoll(10);
    arry.setmarks(94.0, 95.0);
    arry.display();
    return 0;
}