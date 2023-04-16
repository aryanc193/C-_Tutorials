#include <iostream>
using namespace std;

template<class T>
class arry{
    public:
    T data;
    arry(T a){
        data = a;
    }
    void display();
};

template<class T>
void arry<T> ::display(){
    cout<<data;
}

void func(int a){
    cout<<"i am first func"<<endl;
}

template <class T>
void func(T a){
    cout<<"i am templatised func"<<endl;
}

int main()
{
    // arry<float> a(5.6);
    // cout<<a.data<<endl;
    // a.display();

    func(4); //exact match takes the highest priority
    func('c'); //not an exact match so tamplate function is invoked
    return 0;
}