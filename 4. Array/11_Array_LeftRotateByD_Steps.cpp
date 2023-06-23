/**
 *  Author: Amit Raikwar
 *  Problem: Array(left rotate an array by D steps).
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
 * Method to left rotate an array by d steps.
 * @param array Array of number inputed by the user.
 * @param d Rotation by d steps.
 */
void leftRotateByD(vector<int> &array, int d) {
	int n = array.size();
	if (n <= 1) return;
	while (d--) {
		int temp = array[0];
		for (int i = 1; i < n; ++i)
		{
			array[i - 1] = array[i];
		}
		array[n - 1] = temp;
	}
}

void solve() {
	int n, d;
	cin >> n >> d;
	vector<int> vect(n);
	for (int i = 0; i < n; ++i)
		cin >> vect[i];

	leftRotateByD(vect, d);

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
