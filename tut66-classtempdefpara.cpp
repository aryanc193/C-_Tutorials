#include <iostream>
using namespace std;

template <class T1 = int, class T2 = float, class T3 = char>
class arry
{
public:
    T1 a;
    T2 b;
    T3 c;
    arry(T1 x, T2 y, T3 z)
    {
        a = x;
        b = y;
        c=z;
    }
    void display()
    {
        cout << "The value of a is " << a << endl;
        cout << "The value of b is " << b << endl;
        cout << "The value of c is " << c << endl;
    }
};

int main()
{
    arry<> h(4, 6.4, '5');
    h.display();
    cout<<endl;
    arry<float, char, char> i(4, 'y', '5');
    i.display();
    return 0;
}