/**
 * ## Amit Raikwar
 *
 * |* * * * *
 * |*       *
 * |*       *
 * |*       *
 * |* * * * *
 */
#include <bits/stdc++.h>
using namespace std;

int printPattern(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= 2 * n - 1; j++)
        {
            if ((i == 1 || i == n) && (j % 2 == 1) || (j == 1 || j == 2 * n - 1))
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
}

int main()
{
    int n = 5;
    printPattern(7);

    return 0;
}
