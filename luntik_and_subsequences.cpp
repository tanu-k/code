#include <bits/stdc++.h>
#include <cmath>

using namespace std;

int main(int argc, char const *argv[])
{
	long long int t, n, zero, one, a, i, j, ans;

	cin >> t;

	for(i = 0; i < t; i++) {
		
		cin >> n;

		zero = 0;
		one = 0;
		
		for(j = 0; j < n; j++) {
		
			cin >> a;
		
			if(a == 1) one++;
			if(a == 0) zero++;
		}
		
		ans = one * pow(2, zero);

		cout << ans << endl;
	}

	return 0;
}