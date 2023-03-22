#include <iostream>
using namespace std;

class employee{
    int id;
    int salary;
    public:
    void setId(){
        salary = 122;
        cout<<"enter id of employee : ";
        cin>>id;
    }
    void getid(){
        cout<<"the id of this employee is: "<<id<<endl;
    }
};

int main()
{
    // employee arry, adi, anu;
    // arry.setId();
    // arry.getid();

    // adi.setId();
    // adi.getid();
    
    // anu.setId();
    // anu.getid();

    int n;
    cout<<"enter the number of employees: ";
    cin>>n;
    employee fb[n];
    for (int i = 0; i < n; i++)
    {
        fb[i].setId();
        fb[i].getid();
    }
    
    return 0;
}