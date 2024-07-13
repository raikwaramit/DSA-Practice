/**
 *  Author: Amit Raikwar
 *  Problem: Array(Print leader in an array).
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
 * Method to print the leaders present in an array.
 * @param array Array of number inputed by the user.
 */
void printLeader(vector<int> &array) {
	int n = array.size();
	if (n == 0) return;

	vector<int> vect;
	int ref = array[n - 1]; vect.push_back(ref);
	for (int i = array.size() - 2; i >= 0; --i)
	{
		if (array[i] > ref) {
			ref = array[i];
			vect.push_back(ref);
		}
	}

	// Print final array with leadears.a
	for (int i = vect.size() - 1; i >= 0; i--)
		cout << vect[i] << " ";
}

void solve() {
	int n;
	cin >> n;
	vector<int> vect(n);
	for (int i = 0; i < n; ++i)
		cin >> vect[i];

	printLeader(vect);
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
