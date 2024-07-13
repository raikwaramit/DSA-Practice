/**
 * ## Amit Raikwar
 *
 * Problem 1: Left rotate an array by one place.
 *
 * Approach (Swap):
 * - In each iteration.
 *
 * Approach
 * - Assign i+1 => i
 * - Maintain 0 index element and replace it later with the last.
 */

// Swap approach:
#include <bits/stdc++.h>
using namespace std;

vector<int> rotateArrayByOne(vector<int> arr)
{
    int temp = 0;
    for (int i = 1; i < arr.size(); i++)
    {
        temp = arr[i];
        arr[i] = arr[i - 1];
        arr[i - 1] = temp;
    }

    return arr;
}

void printArray(vector<int> arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    vector<int> arr = {1, 2, 2, 4, 5, 7};

    printArray(rotateArrayByOne(arr));

    return 0;
}

// Optimised approach

#include <bits/stdc++.h>
using namespace std;

vector<int> rotateArrayByOne(vector<int> arr)
{
    int first = arr[0];
    for (int i = 1; i < arr.size(); i++)
    {
        arr[i - 1] = arr[i];
    }

    arr[arr.size() - 1] = first;

    return arr;
}

void printArray(vector<int> arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    vector<int> arr = {1, 2, 2, 4, 5, 7};

    printArray(rotateArrayByOne(arr));

    return 0;
}
