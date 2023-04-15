#include <iostream>
#include <math.h>
using namespace std;
/*
create 2 classes:
    1. simplecalculator - takes 2 numbers using a utility function and performs +,-,*,/
    2. scientificcalculator - takes 2 numbers using a utility function and performs any four scientific operation of your choice

    create another class hybridcalculator and iherit it using these 2 classes:
    q1. what type of inheritance are you using?
    ans. multiple inheritance
    q2. which mode of inheritance are you using?
    ans. public mode
    q3. create an object of hybridcalculator and display the results of simple and scientific calculator
    q4. how is code reusability implemented
*/

//----------------------SIMPLE CALCULATOR-----------------------
class simpleCalculator
{
protected:
    float a, b, res;

public:
    void getnos();
    void putnos();
    void add();
    void sub();
    void mul();
    void div();
    void dispRes();
};

void simpleCalculator::getnos()
{
    cout << "Enter two numbers = \n";
    cin >> a >> b;
}

void simpleCalculator::putnos()
{
    cout << "Num1 = " << a << "\tNum2 = " << b << endl;
}

void simpleCalculator::add()
{
    res = a + b;
}

void simpleCalculator::sub()
{
    res = a - b;
}

void simpleCalculator::mul()
{
    res = a * b;
}

void simpleCalculator::div()
{
    res = a / b;
}

void simpleCalculator::dispRes()
{
    cout << "The result of the operation you performed is: " << res << endl;
}

//----------------------SCIENTIFIC CALCULATOR-----------------------
class scientificCalculator
{
    float a, res;

public:
    float getnos2();
    float putnos2();
    float square();
    float squaroot();
    float logBaseE();
    float logBase10();
    float dispRes2();
};

float scientificCalculator::getnos2()
{
    cout << "Enter a number = \n";
    cin >> a;
}

float scientificCalculator::putnos2()
{
    cout << "The number you entered is = " << a << endl;
}

float scientificCalculator::square()
{
    res = pow(a, 2);
}

float scientificCalculator::squaroot()
{
    res = sqrt(a);
}

float scientificCalculator::logBaseE()
{
    res = log(a);
}

float scientificCalculator::logBase10()
{
    res = log10(a);
}

float scientificCalculator::dispRes2()
{
    cout << "The result of the operation you performed is: " << res << endl;
}

//----------------------HYBRID CALCULATOR-----------------------
class hybridCalculator : public simpleCalculator, public scientificCalculator
{
};

int main()
{
    simpleCalculator c1;
    scientificCalculator c2;
    hybridCalculator c3;
    int choice1, choice2, choice3;
    char choice, ans;
    do
    {
        cout << "---------------------------------------------------------------------";
        cout << "\nMENU\n";
        cout << "Enter the calculator you want to use\n1. Simple Calculator\n2. Scientific Calculator\n3. Hybrid Calculator\n4. Exit\n";
        cin >> choice1;
        switch (choice1)
        {
        case 1:
        {
            cout << "\nMENU FOR SIMPLE CALCULATOR\n";
            cout << "Enter Operator \n+ for add, \n- for subtract, \n* for product, \n/ for quotient" << endl;
            cin >> choice;
            c1.getnos();
            c1.putnos();
            switch (choice)
            {
            case '+':
                c1.add();
                break;

            case '-':
                c1.sub();
                break;

            case '*':
                c1.mul();
                break;

            case '/':
                c1.div();
                break;
            }
            c1.dispRes();
        }
        break;

        case 2:
        {
            cout << "\nMENU FOR SCIENTIFIC CALCULATOR\n";
            cout << "Enter operation \n1 for squared value\n2 for square root\n3 for log base e\n4 for log base 10" << endl;
            cin >> choice2;
            c2.getnos2();
            c2.putnos2();
            switch (choice2)
            {
            case 1:
                c2.square();
                break;

            case 2:
                c2.squaroot();
                break;

            case 3:
                c2.logBaseE();
                break;

            case 4:
                c2.logBase10();
                break;
            }
            c2.dispRes2();
        }
        break;

        case 3:
        {
            cout << "\nMENU FOR HYBRID CALCULATOR\n";
            cout << "Enter operation \n1 for add\n2 for subtract\n3 for product\n4 for quotient\n5 for squared value\n6 for square root\n7 for log base e\n8 for log base 10" << endl;
            cin >> choice3;
            switch (choice3)
            {
            case 1:
                c3.getnos();
                c3.putnos();
                c3.add();
                c3.dispRes();
                break;

            case 2:

                c3.getnos();
                c3.putnos();
                c3.sub();
                c3.dispRes();
                break;
            case 3:

                c3.getnos();
                c3.putnos();
                c3.mul();
                c3.dispRes();
                break;

            case 4:
                c3.getnos();
                c3.putnos();
                c3.div();
                c3.dispRes();
                break;

            case 5:
                c3.getnos2();
                c3.putnos2();
                c3.square();
                c3.dispRes2();
                break;

            case 6:
                c3.getnos2();
                c3.putnos2();
                c3.squaroot();
                c3.dispRes2();
                break;

            case 7:
                c3.getnos2();
                c3.putnos2();
                c3.logBaseE();
                c3.dispRes2();
                break;

            case 8:
                c3.getnos2();
                c3.putnos2();
                c3.logBase10();
                c3.dispRes2();
                break;
            }
        }
        break;

        case 4:
            goto end;
        }
        cout << "\nDo you want to continue(Y/N) = ";
        cin >> ans;
    } while (ans == 'Y' || ans == 'y');
    end:
    return 0;
}