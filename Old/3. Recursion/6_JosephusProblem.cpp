/**
 *  Author: Amit Raikwar
 *  Problem: Recursion(Josephus problem).
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
 * Method to print the last surviving index in Josephus problem .
 * @param n Number of person sitting in circular manner.
 * @param k Kth person should be killed in each traversal.
 */
int josephus(int n, int k) {
	if (n == 0)  return 0;

	return (josephus(n - 1, k) + k) % n;
}

void solve() {
	int n, k;
	cin >> n >> k;
	cout << josephus(n, k) << endl;
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
