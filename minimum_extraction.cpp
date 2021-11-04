#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	long long int t, n, i, ans, sum;

	cin >> t;

	while(t--) {
		cin >> n;
		long long int a[n];

		for(i = 0; i < n; i++) {
			cin >> a[i];
		}
		sort(a, a + n);
		sum = 0;
		ans = a[0];

		for(i = 0; i < n; i++) {
			ans = max(ans, a[i] - sum);
			sum += a[i] - sum;
		}

		cout << ans << endl;
	}
	return 0;
}