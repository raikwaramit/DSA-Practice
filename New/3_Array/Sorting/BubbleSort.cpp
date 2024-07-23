/**
 *
 * Bubble sort
 *
 * - Bigger the number it will bubble out of the pond [Array of integer]
 */

#include <bits/stdc++.h>
using namespace std;

void bubbleSort(vector<int> arr)
{

    int n = arr.size(), temp;
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j < n - i; j++)
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
    bubbleSort(vect);

    return 0;
}
