#include <iostream>
#include <vector>
using namespace std;

template <class T>
void display(vector<T> &v)
{
    cout << "Displaying the vector" << endl;
    for (int i = 0; i < v.size(); i++)
    {
        // cout<<v[i]<<" ";
        cout << v.at(i) << " ";
    }
    cout << endl;
}

template <class T>
void insertt(vector<T> &v)
{
    int size;
    cout << "enter the size of your vector: " << endl;
    cin >> size;
    T ele;
    for (int i = 0; i < size; i++)
    {
        cout << "enter an element to add to this vector: " << endl;
        cin >> ele;
        v.push_back(ele);
    }
}

int main()
{
    vector<float> vec1; // zero length float vector
    display(vec1);

    vector<char> vec2(4); // 4-element character vector
    vec2.push_back('5');
    display(vec2);

    vector<char> vec3(vec2); // 4-element character vector
    display(vec3);

    vector<int> vec4(6, 3); // 6-element vector of 3s
    display(vec4);
    cout << vec4.size();

    // insertt(vec1);

    // vec1.pop_back();
    // display(vec1);

    // vector<float> :: iterator iter = vec1.begin();
    // vec1.insert(iter+1, 500, 566);
    // display(vec1);
    return 0;
}

// FOR MORE FUNCTIONS refer to 'cppreference.com'