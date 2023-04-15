#include <iostream>
using namespace std;

/*
student --> test
student -->sports
test --> result
sports --> result
*/

class student
{
protected:
    int roll_no;

public:
    void set_number(int a)
    {
        roll_no = a;
    }
    void print_number(void)
    {
        cout << "your roll no is " << roll_no << endl;
    }
};

class test : virtual public student
{
protected:
    float maths, physics;

public:
    void set_marks(float m1, float m2)
    {
        maths = m1;
        physics = m2;
    }

    void print_marks()
    {
        cout << "your maths marks are " << maths << " and your physics marks are " << physics << endl;
    }
};

class sports : public virtual student
{
protected:
    float score;

public:
    void set_score(float sc)
    {
        score = sc;
    }
    void print_score()
    {
        cout << "Your PT score is: " << score << endl;
    }
};

class result : public test, public sports
{
private:
    float total;

public:
    void display()
    {
        total = maths + physics + score;
        print_number();
        print_marks();
        print_score();
        cout << "your total score is: " << total << endl;
    }
};

int main()
{
    result arry;
    arry.set_number(10);
    arry.set_marks(78, 95);
    arry.set_score(7);
    arry.display();
    return 0;
}