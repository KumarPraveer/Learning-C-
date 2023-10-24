#include <iostream>
#include <vector>
using namespace std;

// Algorithms if the list is sorted!

int lowerBound(vector<int> a, int val)
{
    int s = 0;
    int e = a.size() - 1;
    int ans = -1;
    while (s <= e)
    {
        int mid = (s + e) / 2;
        if (a[mid] <= val)
        {
            ans = a[mid];
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
    }
    return ans;
}

int main()
{
    vector<int> arr = {-1, -1, 2, 3, 5};
    cout << lowerBound(arr, 4);
    return 0;
}