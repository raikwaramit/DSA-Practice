/**
 * ## Amit Raikwar
 *
 * |    *
 * |   * *
 * |  *   *
 * | *     *
 * |* * * * *
 */
#include <bits/stdc++.h>
using namespace std;

int printPattern(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= n + i; j++)
        {
            if (j == n - i || j == n + i || (j + i) % 2 == 1 && i == n - 1)
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
