#include <iostream>
#include <algorithm>
using namespace std;

bool compare(int a, int b)
{
    return a < b;
}

int main()
{
    int arr[] = {9, 8, 7, 6, 5, 4, 3, 2, 1};
    int length = sizeof(arr) / sizeof(int);
    sort(arr, arr + length, compare);
    for (int x : arr)
    {
        cout << x << " ";
    }
    return 0;
}