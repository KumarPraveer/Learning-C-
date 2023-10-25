#include <iostream>
using namespace std;
// Selection Sort function (very easy one but not adaptable not stable)

void selectionSort(int arr[], int n)
{
    int i, j, k;
    for (i = 0; i < n - 1; i++)
    {
        for (k = j = i; j < n; j++)
        {
            if (arr[j] < arr[k])
                k = j;
        }
        swap(arr[i], arr[k]);
    }
}

int main()
{
    int arr[] = {9, 8, 7, 6, 5, 4, 3, 2, 1};
    int length = sizeof(arr) / sizeof(int);
    selectionSort(arr, length);
    for (int x : arr)
    {
        cout << x << " ";
    }
    return 0;
}