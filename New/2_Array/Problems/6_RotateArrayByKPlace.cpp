/**
 * ## Amit Raikwar
 *
 * Problem: Left rotate an array by K place.
 *
 * Approach (Swap): Brute force.
 * - In each iteration just swap from first to last.
 * o(n*k)
 *
 * Approach
 * - Optimised:
 *  - First maintain an array with starting K element.
 *  - Assign [i] = [i+K] , upto i+k < n.
 *  - Later update last k values with maintained array values. [This will require extra space]
 *  t: o(n).
 *
 *
 * IMPORTANT: => Always remember the rotation question how many time we want to do the actual rotation.
 * Rotation is valid only if the k < n , for the k > n =>  k % n becomes the effective rotation.
 */

// Swap approach => Just do swap rotation logic for k times.

// Optimised

#include <bits/stdc++.h>
using namespace std;

void printArray(vector<int> arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
}

vector<int> rotateArrayByK(vector<int> arr, int k)
{
    int save[k];

    for (int i = 0; i < k; i++)
    {
        save[i] = arr[i];
    }

    cout << endl;
    for (int i = k; i < arr.size(); i++)
    {
        arr[i - k] = arr[i];
    }

    for (int i = 0; i < k; i++)
    {
        arr[arr.size() - 1 - i] = save[k - 1 - i];
    }

    return arr;
}

int main()
{
    vector<int> arr = {1, 2, 2, 4, 5, 7};

    printArray(rotateArrayByK(arr, 2));

    return 0;
}