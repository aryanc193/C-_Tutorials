#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    // connecting our file with hout stream
    ofstream hout("sample60.txt");

    // creating a name string and filling it with the string entered by the user
    cout << "enter your name: " << endl;
    string name;
    cin >> name;

    // writing a string to the file
    hout << name + " is my name";

    hout.close();

    ifstream hin("sample60.txt");
    string content;
    // hin >> content;
    getline(hin, content);
    cout << "the content of this file is:\n" << content;
    hin.close();
    return 0;
}