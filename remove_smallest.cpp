#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	int t, n, a[51], i, flag;

	cin >> t;

	while(t--) {
		cin >> n;
		flag = 0;
		for(i = 0; i < n; i++) {
			cin >> a[i];
		}
		sort(a, a + n);
		for(i = 1; i < n; i++) {
			if(a[i] - a[i - 1] > 1) {
				cout << "NO" << endl;
				flag = 1;
				break;
			}
		}

		if(!flag) cout << "YES" << endl;
	}
	return 0;
}