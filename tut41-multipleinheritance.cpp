#include <iostream>
using namespace std;

/* syntax for multiple inheritance
class derived: visibility-mode base1, visibility mode base2
{
    class body of class derived
} */

class base1
{
protected:
    int base1int;

public:
    void setbase1int(int a)
    {
        base1int = a;
    }
};

class base2
{
protected:
    int base2int;

public:
    void setbase2int(int a)
    {
        base2int = a;
    }
};

class base3
{
protected:
    int base3int;

public:
    void setbase3int(int a)
    {
        base3int = a;
    }
};

class derived : public base1, public base2, public base3
{
public:
    void show()
    {
        cout << "The value of base1 is: " << base1int << endl;
        cout << "The value of base2 is: " << base2int << endl;
        cout << "The value of base2 is: " << base3int << endl;
        cout << "The value of their sum is: " << base1int + base2int + base3int<< endl;
    }
};

/* 
The inherited derived class will look something like this:
Data members:
    base1int --> protected
    base2int --> protected
Member functions:
    setbase1int --> public
    setbase2int --> public
    setbase3int --> public
    show -->public
*/

int main()
{
    derived arry;
    arry.setbase1int(21);
    arry.setbase2int(-3);
    arry.setbase3int(9);
    arry.show();
    return 0;
}