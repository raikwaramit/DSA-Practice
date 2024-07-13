/**
 *  Author: Amit Raikwar
 *  Problem: Array(Move all zero to the end | Efficient solution).
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
 * Method to move all zero to the end of the array.
 * @param array Array of number inputed by the user.
 */
void moveZeroToEnd(vector<int> &array) {
	int n = array.size();
	int temp, count = 0;

	for (int i = 0; i < n; ++i)
	{
		if (array[i] != 0) {
			count++;
			if (count - 1 != i) { // swap operation.
				temp = array[i];
				array[i] = array[count - 1];
				array[count - 1] = temp;
			}
		}
	}
}

void solve() {
	int n;
	cin >> n;
	vector<int> vect(n);
	for (int i = 0; i < n; ++i)
		cin >> vect[i];

	moveZeroToEnd(vect);

	for (int i = 0; i < n; ++i)
		cout << vect[i] << " ";
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
