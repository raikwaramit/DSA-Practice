/**
 *  Author: Amit Raikwar
 *  Problem: Mathematics(count no of trailing zero in factorial | Using iterative approach).
 */
#include <bits/stdc++.h>
using namespace std;

#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define MOD 1000000007
#define MOD1 998244353
#define INF 1e18
#define psb push_back
#define ppb pop_back
#define mp make_pair
#define ff first
#define ss second
#define PI 3.141592653589793238462
#define check_ones __builtin_popcountll
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()
#define ll long long int
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*b)/__gcd(a,b)

/**
 * Method to find number of trailing zero in a factorial of a given number.
 * @param n Number.
 * Time: O(n)
 * Space: O(1)
 */

int factorialTrailingZero(int number) {
	if ( number == 1 || number == 0) return 1;

	long long res = 1;
	for (int i = 2; i <= number; ++i)
	{	res *= i;
	}

	int count = 0;
	while (res % 10 == 0) {
		count++;
		res /= 10;
	}
	return count;
}

void solve() {
	int n;
	cin >> n ;
	cout << factorialTrailingZero(n) << endl;
}

int main()
{
	ll t = 1;
	// cin>>t;
	while (t--) {
		solve();
	}
	return 0;
}
