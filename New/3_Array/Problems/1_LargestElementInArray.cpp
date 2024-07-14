/**
 * ## Amit Raikwar
 *
 * Problem: Find the largest element in the array.
 *
 * Approach:
 * - Brute force: Sorting. t: o(log(n)), s: o(1) ;
 * - Optimised approach will be:
 *
 * A. One extra variation will be used.
 *   - In an array there are three cases if comparison is done.
 *   - a > max => modify -> max = a;
 *   - a = max => Discard
 *   - a < max => Discard
 * B. No extra spaces should be used.
 *   - We can do the comparision between current and next element.
 *   - If current > next, swap. [Swap without using any extra variables]
 *   - Other wise just keep using iterating. In this way, last element will be having the largest element in the array.
 */

// Code

#include <bits/stdc++.h>
using namespace std;

int largestElementWithNewVariable(std::vector<int> arr)
{
    int n = arr.size();
    int largest = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (largest < arr[i])
        {
            largest = arr[i];
        }
    }

    return largest;
}

int largestElementWithoutNewVariable(vector<int> arr)
{
    for (int i = 1; i < arr.size(); i++)
    {
        if (arr[i - 1] > arr[i])
        {
            arr[i] = arr[i] + arr[i - 1];
            arr[i - 1] = arr[i] - arr[i - 1];
            arr[i] = arr[i] - arr[i - 1];
        }
    }

    return arr[arr.size() - 1];
}

int main()
{
    vector<int> arr = {1, 2, 7, 3, 5};

    cout << largestElementWithNewVariable(arr) << endl;
    cout << largestElementWithoutNewVariable(arr) << endl;

    return 0;
}