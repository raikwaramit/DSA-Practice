/**
 * Selection sort
 *
 * - Find the smallest in single iteration, push that number at front.
 */

#include <bits/stdc++.h>
using namespace std;

void selectionSort(vector<int> arr)
{

    int n = arr.size(), temp, pointer = 0;
    for (int i = 0; i < n - 1; i++)
    {
        pointer = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[pointer] > arr[j])
            {
                pointer = j;
            }
        }
        temp = arr[pointer];
        arr[pointer] = arr[i];
        arr[i] = temp;
    }

    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    vector<int> vect = {1, 5, 3, 5, 7, 2, 10, 4};
    selectionSort(vect);

    return 0;
}
