#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    string st = "Arry bhai";
    // Opening files using constructor and writing it
    // ofstream out("sample60.txt"); // Write operation
    // out << st;

    // Opening files using constructor and reading it
    string st2;
    ifstream in("sampl60b.txt"); // Read operation
    // in >> st2;
    getline(in, st2); //to read whole line along with blank spaces
    cout << st2;

    return 0;
}
