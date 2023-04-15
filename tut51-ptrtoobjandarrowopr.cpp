#include <iostream>
using namespace std;

class complex
{
    int real, imaginary;

public:
    void getData()
    {
        cout << "The complex number is " << real <<" + "<< imaginary <<"i"<< endl;
    }
    void setData(int a, int b)
    {
        real = a;
        imaginary = b;
    }
};

int main()
{
    complex c1;
    complex *ptr = &c1;
    complex *p = new complex;

    c1.setData(4, 6);
    c1.getData();
    // (*ptr).setData(5, 8); //this is as good as
    ptr->setData(5, 8);
    // (*ptr).getData();
    ptr->getData();

    p->setData(3,5);
    p->getData();

    // Array of Objects
    complex *ptr1 = new complex[4]; 
    
    ptr1->setData(1, 4); 
    ptr1->getData();
    
    (ptr1+1)->setData(2, 8); 
    (ptr1+1)->getData();
    
    return 0;
}