#include <iostream>
using namespace std;

//function prototype
//type functon-name (args);
//int sum(int a,int b); //-->acceptable
int sum(int, int); //-->acceptable
void g();

int main()
{
    int num1, num2;
    cout<<"enter first number"<<endl;
    cin>>num1;
    cout<<"enter second number"<<endl;
    cin>>num2;
    //num1 and num2 are actual parameters
    cout<<"the sum is "<<sum(num1,num2)<<endl;
    g();
    return 0;
}

int sum(int a,int b)
{
    //formal parameters are a & b and they will take values from actual parameters

    int c = a+b;
    return c;
}

void g()
{
    cout<<"Hello, Good morning"<<endl;
}