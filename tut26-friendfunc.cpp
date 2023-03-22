#include <iostream>
using namespace std;

class complex{
    int a,b;
    public:
    void setnum(int n1,int n2){
        a=n1;
        b=n2;
    }

    //below line means that non member sumcomplex function is allowed to do anything with the private components of complex function
    friend complex sumcomplex(complex o1, complex o2);

    void printnum(){
        cout<<"Your number is "<<a<<" + "<<b<<"i"<<endl;
    }
};

complex sumcomplex(complex o1, complex o2){
    complex o3;
    o3.setnum(o1.a + o2.a, o1.b + o2.b);
    return o3;
}

int main()
{
    complex c1, c2, sum;
    c1.setnum(1,4);
    c1.printnum();

    c2.setnum(5,8);
    c2.printnum();
    
    sum = sumcomplex(c1, c2);
    sum.printnum();

    return 0;
}

/* Properties of friend function
1. not in the scope of class
2. since it is not in the scope of the class it cannot be called from the object of the class ; c1.sumcomplex() --> invalid 
3. can be invoked without the help of any object
4. usually contains the objects as arguments
5. can be declared inside private or public function of the class
6. it cant access the members directly by their names and need object_name.member_name to access any member */