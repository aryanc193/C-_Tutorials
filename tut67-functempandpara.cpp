#include <iostream>
using namespace std;

// float funcAverage(float a, float b)
// {
//     float avg = (a + b) / 2;
//     return avg;
// }

// float funcAverage2(int a, float b)
// {
//     float avg = (a + b) / 2;
//     return avg;
// }

template <class T>
void swapp(T &a, T &b)
{
    T temp = a;
    a = b;
    b = temp;
}

template <class T1, class T2>
float funcAverage(T1 a, T2 b)
{
    float avg = (a + b) / 2.0;
    return avg;
}

int main()
{
    float a;
    a = funcAverage(5, 2);
    printf("the average of these nos. is %0.3f", a);
    cout<<endl;

    int x = 5, y = 7;
    cout << x << endl
         << y << endl;
    swapp(x, y);
    cout << x << endl
         << y << endl;
    return 0;
}