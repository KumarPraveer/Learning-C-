#include <iostream>
using namespace std;

void reverseArray(int *arr, int n)
{
    int i = 0, j = n - 1;
    for (; i < j; i++, j--)
    {
        swap(arr[i], arr[j]);
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int length = sizeof(arr) / sizeof(int);
    reverseArray(arr, length);
    for (int x : arr)
    {
        cout << x << " ";
    }
    return 0;
}