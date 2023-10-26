// Very Fomous sorting technique i.e Count Sort
#include <iostream>
#include <vector>
using namespace std;

void countSort(int arr[], int n)
{
    int largest = INT8_MIN;
    for (int i = 0; i < n; i++)
    {
        largest = max(arr[i], largest);
    }
    vector<int> freq(largest + 1, 0);

    for (int i = 0; i < n; i++)
    {
        freq[arr[i]]++;
    }

    int j = 0;
    for (int i = 0; i <= n; i++)
    {
        while (freq[i] > 0)
        {
            arr[j] = i;
            freq[i]--;
            j++;
        }
    }
}

int main()
{
    int arr[] = {1, 2, 9, 8, 7, 5, 4, 7, 2, 2};
    int length = sizeof(arr) / sizeof(int);
    countSort(arr, length);
    for (int x : arr)
    {
        cout << x << " ";
    }
    return 0;
}