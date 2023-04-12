#include <iostream>
using namespace std;

class bankDeposit
{
    int principal;
    int years;
    float interestRate;
    float returnVal;

public:
    bankDeposit() {}
    bankDeposit(int p, int y, float r); // r can be a value like 0.06
    bankDeposit(int p, int y, int r);   // r can be a value like 14
    void show();
};

bankDeposit::bankDeposit(int p, int y, float r)
{
    principal = p;
    years = y;
    interestRate = r;
    returnVal = principal;
    for (int i = 0; i < years; i++)
    {
        returnVal = returnVal * (1 + interestRate);
    }
}

bankDeposit::bankDeposit(int p, int y, int r)
{
    principal = p;
    years = y;
    interestRate = float(r) / 100;
    returnVal = principal;
    for (int i = 0; i < years; i++)
    {
        returnVal = returnVal * (1 + interestRate);
    }
}

void bankDeposit::show()
{
    cout << endl
         << "Principal amount was: " << principal << " Return value after " << years << " years is " << returnVal << endl;
}

int main()
{
    bankDeposit bd1, bd2, bd3;
    int p, y;
    float r;
    int R;

    bd3.show();
    cout << "Enter the value of p, y and r: ";
    cin >> p >> y >> r;
    bd1 = bankDeposit(p, y, r);
    bd1.show();

    cout << "Enter the value of p, y and r: ";
    cin >> p >> y >> R;
    bd2 = bankDeposit(p, y, R);
    bd2.show();
    return 0;
}