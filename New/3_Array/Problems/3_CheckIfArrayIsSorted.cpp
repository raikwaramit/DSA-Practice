/**
 * ## Amit Raikwar
 *
 * Problem: Check if the array is sorted or not.
 * Sorting could be ascending or descending.
 *
 *
 * Approach
 * - Arr length <= 2, return as sorted true.
 * - Arr length > 2
 *   - Compare first two element in the array.
 *      - if first > second => check for descending.
 *      - if first < second => check for ascending.
 * - Iterate over the array and return wherever the condition is false.
 */

// Code

#include <bits/stdc++.h>
using namespace std;

bool checkIfArrayIsSorted(vector<int> arr)
{
    int n = arr.size();

    if (n <= 2)
        return true;

    bool isAscCheck = true;

    if (arr[0] > arr[1])
    {
        isAscCheck = false;
    }

    if (isAscCheck)
    {
        for (int i = 2; i < n; i++)
        {
            if (arr[i] < arr[i - 1])
                return false;
        }
    }
    else
    {
        for (int i = 2; i < n; i++)
        {
            if (arr[i] > arr[i - 1])
            {
                return false;
            }
        }
    }

    return true;
}

int main()
{
    vector<int> arr = {1, 2, 3, 5, 7};

    cout << checkIfArrayIsSorted(arr) << endl;

    return 0;
}