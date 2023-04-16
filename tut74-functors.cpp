#include <iostream>
#include <functional>
#include <algorithm>
using namespace std;

int main()
{
    // Function objects (Functor): function wrapped in a class so that it is available like an object
    int arr[] = {1, 3, 4, 2, 12, 54, 33};
    sort(arr, arr + 5);
    sort(arr, arr + 5, greater<int>());
    for (int i = 0; i < 7; i++)
    {
        cout << arr[i] << "  ";
    }

    return 0;
}