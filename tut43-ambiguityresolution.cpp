#include <iostream>
using namespace std;

class base1
{
public:
    void greet()
    {
        cout << "how are you" << endl;
    }
};

class base2
{
public:
    void greet()
    {
        cout << "kaise ho" << endl;
    }
};

class derived : public base1, public base2
{
    int a;

public:
    //ambiguity resolved using scope resolution operator
    void greet()
    {
        base1::greet();
    }
};

class b
{
public:
    void say()
    {
        cout << "hello world" << endl;
    }
};

class d : public b
{
public:
    // d's new say() method will overrite base class's say() function
    void say()
    {
        cout << "namaste duniya" << endl;
    }
};

int main()
{
    // ambiguity1
    /* base1 b1obj;
    base2 b2obj;
    derived b3obj;
    b3obj.greet(); */

    // ambiguity 2
    b base;
    base.say();

    d derive;
    derive.say();

    return 0;
}