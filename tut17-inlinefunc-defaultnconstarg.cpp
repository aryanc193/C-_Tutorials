#include <iostream>
using namespace std;

inline int product(int a, int b) //inline saves the time of your program by directly replacing the values of actual parameters in formal parameters and it wont need to do it everytime its called
/*its not good practice to use inline funcs in lengthy and complex functions for ex if it contains static vars, loops, or switch statements || as it will bulk up that memory in your systems ram and will be disadvantageous by slowing down ur program alot*/
{
    // static int c = 0;
    // c++;
    return a*b;
}

float moneyRecieved(int currentMoney, float factor = 1.04) //float factor is a default arg
{
    return currentMoney*factor;
}

/* int strlen(const char *p)
{} */

int main()
{
    int a,b;
    cout<<"enter the value of a and b\n";
    cin>>a>>b;
    cout<<"the product of a and b is: "<<product(a,b)<<endl;
    // cout<<"the product of a and b is: "<<product(a,b)<<endl;
    // cout<<"the product of a and b is: "<<product(a,b)<<endl;
    // cout<<"the product of a and b is: "<<product(a,b)<<endl;
    // cout<<"the product of a and b is: "<<product(a,b)<<endl;
    // cout<<"the product of a and b is: "<<product(a,b)<<endl;
    // cout<<"the product of a and b is: "<<product(a,b)<<endl;
    // cout<<"the product of a and b is: "<<product(a,b)<<endl;
    // cout<<"the product of a and b is: "<<product(a,b)<<endl;
    // cout<<"the product of a and b is: "<<product(a,b)<<endl;

    int money = 100000;
    cout<<"if you have Rs."<<money<<" in your bank acc, you will recieve Rs."<<moneyRecieved(money)<<" after 1 year"<<endl;
    cout<<"if you are VIP and you have Rs."<<money<<" in your bank acc, you will recieve Rs."<<moneyRecieved(money, 1.1)<<" after 1 year"<<endl;

    return 0;
}