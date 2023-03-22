#include <iostream>
using namespace std;

class shop{
    int itemId[100];
    int itemPrice[100];
    int counter;
    public:
        void initCounter(){counter = 0;}
        void setPrice();
        void displayPrice();
    
};

void shop::setPrice(){
    cout<<"Enter Id of your item number "<<counter +1<<endl;
    cin>>itemId[counter];
    cout<<"Enter price of your item number "<<counter +1<<endl;
    cin>>itemPrice[counter];
    counter++;
}

void shop::displayPrice(){
    for (int i = 0; i < counter; i++)
    {
        cout<<"The price of item "<<itemId[i]<<" is: "<<itemPrice[i]<<endl;
    } 
}

int main()
{
    shop dukaan;
    dukaan.initCounter();
    dukaan.setPrice();
    dukaan.setPrice();
    dukaan.setPrice();
    dukaan.displayPrice();
    return 0;
}