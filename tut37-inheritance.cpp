#include <iostream>
using namespace std;

// base class
class employee
{
public:
    int id;
    float salary;
    employee(int inpId)
    {
        id = inpId;
        salary = 34;
    }
    employee() {}
};

// derived class syntax
/* // class {{derived-class-name}} : {{visibility-mode}} base-class-name
{
    class members/methods/etc...
}
Note:
1.default visibility mode is private
2. private visibility mode: public members of the base class become the private members of the derived class
3. public visibility moce: public members of the base class become the public members of the derived class
4. private members are never inherited
*/

// creating a derived class programmer from employee class
class programmer : public employee
{
public:
    int languagecode;
    programmer(int inpId)
    {
        id = inpId;
        languagecode = 9;
    }
    void getData()
    {
        cout << id << endl;
    }
};

int main()
{
    employee arry(1), aditya(2);
    cout << arry.salary << endl;
    cout << aditya.salary << endl;
    programmer skillf(10);
    cout << skillf.languagecode << endl;
    cout << skillf.id << endl;
    skillf.getData();
    return 0;
}