/**
 *  Author: Amit Raikwar
 *  Problem: Mathematics(GCD | Using recursive approach(Euclidean's approach)).
 */
#include <bits/stdc++.h>
using namespace std;

/**
 * Method to find greatest common divisor for the given two numbers.
 * @param n Number.
 */
long long greatestCommonDivisor(long long number1, long long number2) {
	if (number2 == 0) return number1;

	return greatestCommonDivisor(number2, number1 % number2);
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
