#include <iostream>
using namespace std;

class employee
{
    int id;
    static int count;

public:
    void setData()
    {
        cout << "enter the id of employee: ";
        cin >> id;
        count++;
    }
    void getdata()
    {
        cout << "\nid of employee " << count << " is : " << id << endl;
    }
    static void getcount(){
        cout<<"the vlaue of count is: "<<count<<endl;
    }
};

int employee::count; //default value is 0

int main()
{
    employee arry, adi, anu;
    // arry.id = 1;
    // arry.count = 1; //cant do this as id and data are private member

    arry.setData();
    arry.getdata();
    employee::getcount();

    adi.setData();
    adi.getdata();
    employee::getcount();

    anu.setData();
    anu.getdata();
    employee::getcount();
    return 0;
}