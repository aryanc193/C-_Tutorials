#include <iostream>
#include <math.h>
using namespace std;

class point
{
    int x, y;
    friend float dist(point, point);

public:
    point(int a, int b)
    {
        cout << "enter x coordinate: ";
        cin >> a;
        cout << "enter y coordinate: ";
        cin >> b;
        x = a;
        y = b;
    }

    void displaypoint()
    {
        cout << "(" << x << ", " << y << ")" << endl;
    }
};
// create a function which computes the distance between 2 points
float dist(point p1, point p2)
{
    float d;
    float a;
    float b;
    a = p1.x - p2.x;
    b = p1.y - p2.y;
    d = sqrt(a * a + b * b);
    cout << "The distance between given points is: " << d;
}

int main()
{
    int x1, y1, x2, y2;
    point j(x1, y1);
    point k(x2, y2);
    cout << "point j is: ";
    j.displaypoint();
    cout << "point k is: ";
    k.displaypoint();
    dist(j, k);
    // point p(1, 1);
    // p.displaypoint();
    // point q(4, 6);
    // q.displaypoint();

    return 0;
}