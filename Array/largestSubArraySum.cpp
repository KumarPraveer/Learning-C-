#include <iostream>
using namespace std;

// largest sub array sum function
int largestSubArraySum(int *arr, int n)
{
    int largestSum = INT8_MIN;
    int subArraySum;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            subArraySum = 0;
            for (int k = i; k < j; k++)
            {
                subArraySum += arr[k];
            }
            largestSum = max(largestSum, subArraySum);
        }
    }
    return largestSum;
}

int main()
{
    int arr[] = {-2, 3, 4, -1, 5, -12, 6, 1, 3};
    int length = sizeof(arr) / sizeof(int);
    cout << largestSubArraySum(arr, length);
    return 0;
}