#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	long long int t, n, k, count, m;

	cin >> t;

	while(t--) {
		cin >> n >> k;
		count = 0;
		m = 1;
		while(n > m && k >= m) {
			m *= 2;
			count++;
		}
		cout << count + (n - m + k - 1) / k << endl;
	}
	return 0;
}