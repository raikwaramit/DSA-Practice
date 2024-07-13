/**
 *  Author: Amit Raikwar
 *  Problem: Mathematics(GCD | Using recursive approach).
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
 * Method to find greatest common divisor for the given two numbers.
 * @param n Number.
 * Time:
 * Space:
 */
long long greatestCommonDivisor(long long number1, long long number2) {
	if (number1 == number2) {
		return number2;
	} else if (number1 > number2) {
		return greatestCommonDivisor(number1 - number2, number2);
	}
	else {
		return greatestCommonDivisor(number1, number2 - number1);
	}
}

void solve() {
	int n1, n2;
	cin >> n1 >> n2 ;
	cout << greatestCommonDivisor(n1, n2);
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
