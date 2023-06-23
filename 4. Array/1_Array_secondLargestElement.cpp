/**
 *  Author: Amit Raikwar
 *  Problem: Array(Second largest element).
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
 * Method to find second largest element in an array.
 * @param array Array of number inputted by the user.
 */
int secondLargestElement(vector<int> array) {
	int n = array.size();
	if (n < 2) return -1;

	int first , second;
	if (array[0] > array[1]) {first = array[0]; second = array[1]; } else {
		first = array[1]; second = array[0];
	}
	for (int i = 2; i < n; ++i)
	{
		if (array[i] > first) {
			second = first;
			first = array[i];
		} else if (array[i] != first && array[i] > second) {
			second = array[i];
		}
	}
	return second;
}

void solve() {
	int n;
	cout << "Enter size of array" << endl;
	cin >> n;
	vector<int> vect(n);
	for (int i = 0; i < n; ++i)
		cin >> vect[i];

	cout << secondLargestElement(vect);
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
