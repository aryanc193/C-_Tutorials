#include <iostream>
#include <list>
using namespace std;

void display(list<int> &lst)
{
    list<int>::iterator it;
    for (it = lst.begin(); it != lst.end(); it++)
    {
        cout << *it << "  ";
    }
    cout << endl;
}

void insertt(list<int> &lst)
{
    list<int>::iterator it;
    for (it = lst.begin(); it != lst.end(); it++)
    {
        cout << "Enter the element you want to insert: ";
        cin >> *it;
    }
}

int main()
{
    list<int> list1; // list of 0 length
    list1.push_back(5);
    list1.push_back(7);
    list1.push_back(1);
    list1.push_back(1);
    list1.push_back(9);
    list1.push_back(12);

    display(list1);

    list1.pop_back();
    display(list1);
    list1.pop_front();
    display(list1);
    list1.remove(1);
    display(list1);

    // cout<< *iter;
    // iter++;

    list<int> list2(3); // empty list of size 3
    list<int>::iterator iter;
    iter = list2.begin();
    *iter = 45;
    iter++;

    insertt(list2);
    display(list2);

    list1.merge(list2);
    cout << "after merging\n";
    display(list1);

    // reversing the list
    list1.reverse();
    display(list1);

    return 0;
}

// FOR MORE FUNCTIONS refer to 'cppreference.com'