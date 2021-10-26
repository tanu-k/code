#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	int t, n, q, x, i, j, a[2001][2001], c[2001], k;

	cin >> t;

	while(t--) {
		
		cin >> n;

		for(i = 1; i <= n; i++) {
			cin >> a[0][i];
		}

		for(i = 1; i <= n; i++) {
			
			for(j = 1; j <= n; j++) {
				c[j] = 0;
			}
			for(j = 1; j <= n; j++) {
				c[a[i - 1][j]]++;
			}
			for(j = 1; j <= n; j++) {
				a[i][j] = c[a[i - 1][j]];
			}
		}

		cin >> q;

		for(j = 0; j < q; j++) {
			cin >> x >> k;
			if(k > n) k = n;

			cout << a[k][x] << endl;
		}
	}

	return 0;
}