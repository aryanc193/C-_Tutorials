#include <iostream>
using namespace std;

class complex
{
    int a, b;

public:
    complex(void); 
    complex(int, int);
    void printnum()
    {
        cout << "your number is " << a << " + " << b << "i" << endl;
    }
};

complex :: complex(void) //this is a default constructor as it accepts no parameters
{
    a = 0;
    b = 0;
}

complex :: complex(int x, int y) //this is a parameterized constructor
{
    a = x;
    b = y;
}

int main()
{
    complex c;
    c.printnum();
    complex a(4, 6);
    a.printnum();
    complex b = complex(5, 7);
    b.printnum();
    return 0;
}