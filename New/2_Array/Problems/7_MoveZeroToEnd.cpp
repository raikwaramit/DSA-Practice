/**
 * ## Amit Raikwar
 *
 * Problem: Move zero to the end of the array.
 *
 * Approach: [Without maintaining the order of the array]:
 * - iterate over the array.
 * - If find a zero, just replace with n-1(last) - zero counter.
 * - return same array.
 *
 * Approach:
 * - (Brute force) [With maintaining the order of the array]
 *  - Save all the non-zero elements in an array.
 *  - total array - Length of the array.
 *  - Run above times to push zero at the back.
 *  T = O(2N) = O(N) + O(Count of zero).
 *  S = O(N);
 *
 * - (Optimized)
 *  - Iterate over the whole array once with condition i + zero counter < n.
 *  - Maintain a zero counter.
 *  - If I find a zero, counter ++,
 *  - if its a non zero, swap it with current position  <-> current + zero counter.
 *  - return array
 */

// Code [Without maintaining the non-zero number order];
#include <bits/stdc++.h>
using namespace std;

void printArray(vector<int> arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
}

vector<int> moveZeroAtEnd(vector<int> arr)
{
    int zeroCounter = 0, n = arr.size();
    for (int i = 0; i < n - zeroCounter; i++)
    {
        if (arr[i] == 0)
        {
            arr[i] = arr[n - 1 - zeroCounter];
            arr[n - 1 - zeroCounter] = 0;
            zeroCounter++;
        }
    }

    return arr;
}

int main()
{
    vector<int> arr = {1, 0, 2, 0, 2, 4, 5, 7};

    printArray(moveZeroAtEnd(arr));

    return 0;
}

// Code : [Maintaining the order of the array]

#include <bits/stdc++.h>
using namespace std;

void printArray(vector<int> arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
}

vector<int> moveZeroAtEnd(vector<int> arr)
{
    int zeroCounter = 0, n = arr.size(), temp = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            zeroCounter++;
        }
        else
        {
            if (zeroCounter > 0)
            {
                temp = arr[i];
                arr[i] = arr[i - zeroCounter];
                arr[i - zeroCounter] = temp;
            }
        }
    }

    return arr;
}

int main()
{
    vector<int> arr = {1, 0, 2, 0, 0, 2, 4, 5, 7};

    printArray(moveZeroAtEnd(arr));

    return 0;
}
