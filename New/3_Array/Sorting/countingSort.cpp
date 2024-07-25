/**
 * Counting sort.
 *
 * - As the name suggests counting sort means counting the values then rearranging them in sorted order.
 */

#include <bits/stdc++.h>
using namespace std;

void countingSort(vector<int> arr)
{

    vector<int> vect(100000, 0);
    for (int i = 0; i < arr.size(); i++)
    {
        vect[arr[i]]++;
    }

    for (int i = 0; i < 100000; i++)
    {
        for (int j = 0; j < vect[i]; j++)
            cout << i << " ";
    }
}

int main()
{
    vector<int> vect = {1, 5, 3, 5, 7, 2, 10, 4};
    countingSort(vect);

    return 0;
}
