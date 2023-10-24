#include <iostream>
using namespace std;
void printingInPairs(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            cout << "(" << arr[i] << "," << arr[j] << ")"
                 << " ";
        }
    }
}
int main()
{
    int arr[] = {1, 2, 3, 4};
    int length = sizeof(arr) / sizeof(int);
    printingInPairs(arr, length);
    return 0;
}
