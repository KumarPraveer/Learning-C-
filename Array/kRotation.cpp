#include <iostream>
#include <vector>
using namespace std;

void kRotate(vector<int> a, int k)
{
    for (int i = 0; i < k; i++)
    {
        int last = a[a.size() - 1];
        for (int j = a.size() - 1; j > 0; j--)
        {
            a[j] = a[j - 1];
        }
        a[0] = last;
    }
    for (int x : a)
    {
        cout << x << " ";
    }
}

int main()
{
    vector<int> arr = {1, 3, 5, 7, 9};
    int length = sizeof(arr) / sizeof(int);
    kRotate(arr, 2);
    return 0;
}