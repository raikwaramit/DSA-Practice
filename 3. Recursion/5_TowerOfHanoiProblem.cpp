/**
 *  Author: Amit Raikwar
 *  Problem: Recursion(Tower of Hanoi problem).
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
 * Method to print the steps required to solve the tower of hanoi problem for given discs.
 * @param  n
 */
void towerOfHanoi(int numberOfDisc, char a, char b, char c) {
	if (numberOfDisc <= 0) return;

	towerOfHanoi(numberOfDisc - 1, a, c, b);
	cout << "Move disc from " << a << " to " << c << endl;
	towerOfHanoi(numberOfDisc - 1, b, a, c);
}

void solve() {
	int n;
	cin >> n;
	towerOfHanoi(n, 'A', 'B', 'C');
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
