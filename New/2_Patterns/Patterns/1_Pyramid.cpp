/**
 * ## Amit Raikwar
 *
 * |*
 * |**
 * |***
 * |****
 * |*****
 */
#include <bits/stdc++.h>
using namespace std;

int printPattern(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

int main()
{
    int n = 5;
    printPattern(8);

    return 0;
}
