#include <iostream>
using namespace std;

/*
Syntax for initialization list in constructor:
constructor (argument-list) : initialization-section
{
    assignment + other code;
}

class test{
    int a;
    int b;
    public:
        test (int i, int j) : a(i), b(j){constructor-body}
}
*/

class test
{
    int a;
    int b;

public:
    // test(int i, int j) : a(i), b(j)
    // test(int i, int j) : a(i), b(i+j)
    // test(int i, int j) : a(i), b(2 * j)
    // test(int i, int j) : a(i), b(a + j)
    // test(int i, int j) : b(j), a(i + b) // --> RED FLAG THIS WILL CREATE PROBLEMS AS a WAS DECLARED FIRST SO IT WILL BE INITIALIZED FIRST
    test(int i, int j)
    {
        a = i;
        b = j;
        cout << "Constructor executed" << endl;
        cout << "value of a is " << a << endl;
        cout << "value of b is " << b << endl;
    }
};

int main()
{
    test(4, 6);
    return 0;
}