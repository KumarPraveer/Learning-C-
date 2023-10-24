#include <iostream>
using namespace std;

int binarySearch(int *arr, int n, int key)
{
    int i = 0;
    int j = n - 1;
    while (i < j)
    {
        int mid = (i + j) / 2;
        if (arr[mid] < key)
        {
            i = mid + 1;
        }
        else if (arr[mid] > key)
        {
            j = mid - 1;
        }
        else
        {
            return mid;
        }
    }
    return -1;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int length = sizeof(arr) / sizeof(int);
    binarySearch(arr, length, 5) == -1 ? printf("Element not found!") : printf("Element Found at index %d", binarySearch(arr, length, 5));
    return 0;
}