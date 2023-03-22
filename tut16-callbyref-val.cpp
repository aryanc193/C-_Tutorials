#include <iostream>
using namespace std;

int sum(int a,int b)
{
    int c = a+b;
    return c;
}

//this will not swap a and b
void swap(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
}

//call by reference using pointers
void swapPntr(int* a, int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

//call by reference using c++ reference variables
//int &
void swapRefVar(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
    // return a;
}

int main()
{
    int a = 4, b = 5;
    cout<<"the sum of a and b is "<<sum(a,b);
    cout<<"the value of a is: "<<a<<" and the value of b is: "<<b<<endl;
    // swap(a,b);
    // cout<<"after swapping\na: "<<a<<"\nb: "<<b<<endl; //this will not swap the values
    // swapPntr(&a,&b); //this will swap a and b using pointer reference
    // cout<<"after swapping\na: "<<a<<"\nb: "<<b<<endl;
    //swapRefVar(a,b) = 766; //when using int &func
    swapRefVar(a,b); //this will swap a and b using reference variables
    cout<<"after swapping\na: "<<a<<"\nb: "<<b<<endl;
    return 0;
}