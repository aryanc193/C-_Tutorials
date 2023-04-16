#include <iostream>
#include <map>
#include <string>
using namespace std;

// Map is an associative array

int main()
{
    map<string, int> marksMap;
    marksMap["Arry"] = 92;
    marksMap["Aryan"] = 90;
    marksMap["Aditya"] = 91;

    marksMap.insert({{"Aniket", 89}, {"Mehul", 85}});

    map<string, int>::iterator itr;
    for (itr = marksMap.begin(); itr != marksMap.end(); itr++)
    {
        cout << (*itr).first << "  " << (*itr).second << endl;
    }

    cout << "The size is: " << marksMap.size() << endl;
    cout << "The max size is: " << marksMap.max_size() << endl;
    cout << "The empty's return value is: " << marksMap.empty() << endl;

    return 0;
}