/**
 * Insertion sort.
 *
 * - Take a value at a time and just do the insertion at it correct place.
 * - Left of it is correctly sorted.
 */

#include <bits/stdc++.h>
using namespace std;

void insertionSort(vector<int> arr)
{

    int n = arr.size(), temp;
    for (int i = 1; i < n; i++)
    {
        for (int j = i; j >= 0; j--)
        {
            if (arr[j] < arr[j - 1])
            {
                temp = arr[j];
                arr[j] = arr[j - 1];
                arr[j - 1] = temp;
            }
        }
    }

    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    vector<int> vect = {1, 5, 3, 5, 7, 2};
    insertionSort(vect);

    return 0;
}
