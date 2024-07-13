/**
 *  Author: Amit Raikwar
 *  Problem: Array(Find max difference in ordered way in an array).
 *  2 4 5 6 2 6 7
 *  0 2 1 1 4 4 1
 *  Ans = 4
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
 * Method to find the max difference in an array.
 * @param array Array of number inputed by the user.
 */
int maxDiff(vector<int> &array) {
	int n = array.size();
	if (n <= 1) return 1;

	vector<int> vect;
	vect.psb(0);
	for (int i = 1; i < n; ++i)
	{	vect.psb(abs(array[i] - array[i - 1]));
	}

	int max = vect[0];
	for (int i = 1; i < n; ++i)
	{	if (vect[i] > max) max = vect[i];
	}
	return max;
}

void solve() {
	int n;
	cin >> n;
	vector<int> vect(n);
	for (int i = 0; i < n; ++i)
		cin >> vect[i];

	cout << maxDiff(vect);
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
