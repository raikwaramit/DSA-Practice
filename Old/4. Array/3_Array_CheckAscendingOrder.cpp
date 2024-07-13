/**
 *  Author: Amit Raikwar
 *  Problem: Array(Check if array is ascending order sorted).
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
 * Method to check given array is sorted or not.
 * @param array Array of number inputted by the user.
 */
string checkIfSortedInAscending(vector<int> array) {
	int n = array.size();
	for (int i = 1; i < n; ++i)
	{
		if (array[i] < array[i - 1]) return "Sorted in ascending order";
	}
	return "Sorted in ascending order";
}

void solve() {
	int n;
	cin >> n;
	vector<int> vect(n);
	for (int i = 0; i < n; ++i)
		cin >> vect[i];

	cout << checkIfSortedInAscending(vect);
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
