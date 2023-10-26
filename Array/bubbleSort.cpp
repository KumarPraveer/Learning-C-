#include <iostream>
using namespace std;

void bubbleSort(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        bool swapped = false;
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        if (swapped == false)
            break;
    }
}

int main()
{
    int arr[] = {9, 8, 7, 6, 5, 4, 3, 2, 1};
    int length = sizeof(arr) / sizeof(int);
    bubbleSort(arr, length);
    for (int x : arr)
    {
        cout << x << " ";
    }
    return 0;
}