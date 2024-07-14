/**
 * ## Amit Raikwar
 *
 * Problem: Find second largest element in an array.
 *
 * Approach
 * A. Bruteforce
 *  - Using the sorting and returning the second index parameter.
 *
 * B. Using the two variable approach.
 *  - Take two variable larg, secLarg as INT_MIN.
 *  - Iterate over the array
 *  - Compare the current index value with larg
 *      - curr > larg => larg = curr.  Discard equal comparison.
 *  - If current < larg => current > secLarg -> secLarg =  curr.
 *  - return current.
 */

// Code:
#include <bits/stdc++.h>
using namespace std;

int findSecondLargest(vector<int> arr)
{
    int larg = INT_MIN;
    int secLarg = INT_MIN;

    for (int index = 0; index < arr.size(); index++)
    {
        if (arr[index] > larg)
        {
            secLarg = larg;
            larg = arr[index];
        }
        else if (arr[index] < larg && arr[index] > secLarg)
        {
            secLarg = arr[index];
        }
    }

    return secLarg;
}

int main()
{
    vector<int> arr = {1, 2, 7, 3, 5};

    cout << findSecondLargest(arr) << endl;

    return 0;
}

// Code for the third largest solution.

#include <bits/stdc++.h>
using namespace std;

int findThirdLargest(vector<int> arr)
{
    int larg = INT_MIN;
    int secLarg = INT_MIN;
    int thirdLarg = INT_MIN;

    for (int index = 0; index < arr.size(); index++)
    {
        if (arr[index] > larg)
        {
            thirdLarg = secLarg;
            secLarg = larg;
            larg = arr[index];
        }
        else if (arr[index] < larg)
        {
            if (arr[index] > secLarg)
            {
                thirdLarg = secLarg;
                secLarg = arr[index];
            }
            else if (arr[index] < secLarg && arr[index] > thirdLarg)
            {
                thirdLarg = arr[index];
            }
        }
    }

    return thirdLarg;
}

int main()
{
    vector<int> arr = {1, 2, 7, 3, 5};

    cout << find(arr) << endl;

    return 0;
}