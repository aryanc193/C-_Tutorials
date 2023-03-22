#include <iostream>
using namespace std;

typedef struct employee
{
    int eId;
    char favchar;
    float salary;
}ep;

union money //shares memory between all data
{
    int rice;
    char car;
    float pounds;
};

int main()
{
    ep arry;
    struct employee aditya;
    arry.eId = 1;
    arry.favchar = 'a';
    arry.salary = 1200000000;
    cout<<"the value is "<<arry.eId<<endl;
    cout<<"the value is "<<arry.favchar<<endl;
    cout<<"the value is "<<arry.salary<<endl;

    union money m1;
    m1.rice = 34;
    m1.car = 'c';
    cout<<m1.car<<endl;
    cout<<m1.rice<<endl;

    cout<<"\n";
    enum Meal{breakfast, lunch, dinner};
    Meal m2 = dinner;
    cout<<m2<<endl;
    cout<<(m2==1)<<endl;
    cout<<(m2==2)<<endl;
    cout<<breakfast<<endl;
    cout<<lunch<<endl;
    cout<<dinner<<endl;
    return 0;
}