/**
 *  Author: Amit Raikwar
 *  Problem: Array(Move all zero to the end).
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
	int j = 0, temp;

	for (int i = 0; i < n; ++i)
	{
		if (array[i] == 0) {
			j = i + 1;
			while (j < n) {
				if (array[j] != 0)
				{	// swap operation.
					temp = array[i];
					array[i] = array[j];
					array[j] = temp;
				}
				j++;
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