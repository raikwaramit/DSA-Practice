/**
 *  Author: Amit Raikwar
 *  Problem: Mathematics(Sum of digits).
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
 * Method to count the digits of the number .
 * @param n Number.
 * Time: O(log(n))
 * Space: O()
 */
int count(int n) {
	int res = 0;
	while (n != 0) {
		res += n % 10;
		n /= 10;
	}

	return res;
}

void solve() {
	int n;
	cin >> n ;
	cout << count(n) << endl;
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
