/**
 * ## Amit Raikwar
 *
 * Problem: Linear search
 *
 * Approach:
 * - iterate over the array.
 * - check if the element exists.
 */

#include <bits/stdc++.h>
using namespace std;

int linearSearch(vector<int> arr, int element)
{
    int n = arr.size();

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == element)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    vector<int> arr = {1, 0, 2, 0, 0, 2, 4, 5, 7};

    cout << linearSearch(arr, 0);

    return 0;
}
