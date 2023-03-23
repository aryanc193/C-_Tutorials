#include <iostream>
using namespace std;

class complex
{
    int a, b;

public:
    // creating a constructor
    /* it is a special member function with the same name as of the class
    it is automatically invoked whenever an object is created
    it is used to initialize the objects of its class */
    complex(void); // constructor declaration
    void printnum()
    {
        cout << "your number is " << a << " + " << b << "i" << endl;
    }
};

complex :: complex(void) //this is a default constructor
{
    a = 10;
    b = 0;
}

int main()
{
    complex c;
    c.printnum();
    return 0;
}

/* Characteristics of contructor:

1. it should be declared in the public section of the class
2. they are automatically invoked whenever the object is created
3. do not have return types and cannot return values 
4. it can have default args
5. we cant refer to the address */