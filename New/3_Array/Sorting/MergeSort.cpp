/**
 * Merge sort.
 *
 * - Divide and merge. Recursion.
 */

// Using extra space.
#include <bits/stdc++.h>
using namespace std;

vector<int> divideVector(vector<int> arr, int n1, int n2)
{
    vector<int> v1;
    for (int i = n1; i <= n2; i++)
    {
        v1.push_back(arr[i]);
    }

    return v1;
}

vector<int> mergeVector(vector<int> vect1, vector<int> vect2)
{
    int i1 = 0, i2 = 0, n1 = vect1.size(), n2 = vect2.size();
    vector<int> vect;
    while (i1 < n1 && i2 < n2)
    {
        if (vect1[i1] > vect2[i2])
        {
            vect.push_back(vect2[i2]);
            i2++;
        }
        else
        {
            vect.push_back(vect1[i1]);
            i1++;
        }
    }

    for (int i = i2; i < n2; i++)
        vect.push_back(vect2[i]);

    for (int i = i1; i < n1; i++)
        vect.push_back(vect1[i]);

    return vect;
}

vector<int> mergeSort(vector<int> arr)
{
    int n = arr.size();

    if (n <= 1)
        return arr;

    // Dividing first half
    vector<int> v1 = mergeSort(divideVector(arr, 0, (n - 1) / 2));
    // Dividing second half
    vector<int> v2 = mergeSort(divideVector(arr, (n - 1) / 2 + 1, n - 1));

    return mergeVector(v1, v2);
}

int main()
{
    vector<int> vect = {1, 5, 3, 5, 7, 2, 10, 4};
    vector<int> result = mergeSort(vect);
    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << " ";
    }
    return 0;
}

// Without using extra spaces.

#include <bits/stdc++.h>
using namespace std;

void mergeVector(vector<int> &arr, int low, int mid, int high)
{
    vector<int> vect;
    int left = low;
    int right = mid + 1;
    while (left <= mid && right <= high)
    {
        if (arr[left] > arr[right])
        {
            vect.push_back(arr[right]);
            right++;
        }
        else
        {
            vect.push_back(arr[left]);
            left++;
        }
    }

    while (left <= mid)
    {
        vect.push_back(arr[left]);
        left++;
    }
    while (right <= high)
    {
        vect.push_back(arr[right]);
        right++;
    }

    for (int i = low; i <= high; i++)
    {
        arr[i] = vect[i - low];
    }
}

void mergeSort(vector<int> &arr, int low, int high)
{
    if (high == low)
        return;

    int mid = (high + low) / 2;

    // Dividing first half
    mergeSort(arr, low, mid);
    // Dividing second half
    mergeSort(arr, mid + 1, high);

    mergeVector(arr, low, mid, high);
}

int main()
{
    vector<int> vect = {1, 5, 3, 5, 7, 2, 10, 4};
    mergeSort(vect, 0, 7);
    for (int i = 0; i < vect.size(); i++)
    {
        cout << vect[i] << " ";
    }
    return 0;
}
