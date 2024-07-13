/**
 * ## Amit Raikwar
 *
 * Problem: Remove duplicates from the array.
 *
 * Approach:
 * - For basic:
 *  - check if consecutive elements are same.
 *  - Push first different element to a new array
 *  - Avoid same pushing element to the new array.
 */

// Code

#include <bits/stdc++.h>
using namespace std;

vector<int> getArrayWithUniqueElement(vector<int> arr)
{
    vector<int> uniqueElements;
    uniqueElements.push_back(arr[0]);

    for (int i = 1; i < arr.size(); i++)
    {
        if (arr[i] != arr[i - 1])
        {
            uniqueElements.push_back(arr[i]);
        }
    }

    return uniqueElements;
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
    vector<int> arr = {1, 2, 2, 3, 3, 4, 5, 7};

    printArray(getArrayWithUniqueElement(arr));

    return 0;
}

/**
 * Approach: for allowing the n duplication.
 * - Counter approach.
 *   - Maintain a counter for unique element and push the element if counter is less than n.
 *
 * - Special approach.
 *   - Push first n element inside the new array.
 *   - Iterate from n to size of array.
 *   - Just check if current and current - n index value are equal
 *   n=3
 *   [1,2,2,2,3,3,3,3]
 *    => [1,2,2,2,3,3,3]
 */

// Counter approach

#include <bits/stdc++.h>
using namespace std;

vector<int> getArrayWithUniqueElement(vector<int> arr, int n)
{
    vector<int> uniqueElements;
    uniqueElements.push_back(arr[0]);
    int counter = 1;
    for (int i = 1; i < arr.size(); i++)
    {
        if (arr[i] == arr[i - 1])
        {
            counter++;
            if (counter <= n)
            {
                uniqueElements.push_back(arr[i]);
            }
        }
        else
        {
            uniqueElements.push_back(arr[i]);
            counter = 1;
        }
    }

    return uniqueElements;
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
    vector<int> arr = {1, 2, 2, 3, 3, 3, 3, 4, 4, 4, 4, 5, 7};

    printArray(getArrayWithUniqueElement(arr, 1));

    return 0;
}

// Special approach

#include <bits/stdc++.h>
using namespace std;

vector<int> getArrayWithUniqueElement(vector<int> arr, int n)
{
    vector<int> uniqueElements;

    for (int i = 0; i < n; i++)
    {
        uniqueElements.push_back(arr[i]);
    }

    for (int i = n; i < arr.size(); i++)
    {
        if (arr[i] != arr[i - n])
        {
            uniqueElements.push_back(arr[i]);
        }
    }

    return uniqueElements;
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
    vector<int> arr = {1, 2, 2, 3, 3, 3, 3, 4, 4, 4, 4, 5, 7};

    printArray(getArrayWithUniqueElement(arr, 3));

    return 0;
}