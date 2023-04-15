#include <iostream>
using namespace std;

class base
{
protected:
    int a;

private:
    int b;
};

/*
                    Public Derivation   Private Derivation  Protectted Derivation
Private members         Not inherited       Not inherited       Not Inherited
Protected members       Protected           Private             Protected
Public members          Public              Private             Protected
 */

class derived : protected base
{
};

int main()
{
    base b;
    derived d;
    // cout << b.a << endl; //will not run as it is in protected part
    // cout << d.a << endl; //will not run as it is in protected part
    // only member functions of derived class will be able to use the object a 
    return 0;
}