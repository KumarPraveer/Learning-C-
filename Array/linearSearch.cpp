// Program of linear Search!

#include <iostream>
using namespace std;
int linearSearch(int *arr, int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
            return i;
    }
    return false;
}

int main()
{
    int arr[] = {1, 9, 8, 2, 3, 6, 4, 5};
    int length = sizeof(arr) / sizeof(int);
    linearSearch(arr, length, 5) ? printf("Element found at index %d", linearSearch(arr, length, 5))
                                 : printf("Element not Found!!");
    return 0;
}