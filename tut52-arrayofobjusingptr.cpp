#include <iostream>
using namespace std;

class shopItem
{
    int id;
    float price;

public:
    void setData(int a, float b)
    {
        id = a;
        price = b;
    }
    void getData()
    {
        cout << "The price of item with id " << id << " is " << price << endl;
    }
};

int main()
{
    int size = 3;
    int a;
    float b;
    shopItem *ptr = new shopItem[size];

    shopItem *ptr2 = ptr;

    for (int i = 0; i < size; i++)
    {
        cout << "Enter the id and price of the item: " << i + 1 << endl;
        cin >> a >> b;
        ptr->setData(a, b);
        ptr++;
    }

    for (int i = 0; i < size; i++)
    {
        cout << "Item number: " << i + 1 << endl;
        ptr2->getData();
        ptr2++;
    }
    return 0;
}