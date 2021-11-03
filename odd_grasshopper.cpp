#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	long long int t, x, n, i;

	cin >> t;

	while(t--) {
		cin >> x >> n;
		if(n % 4 == 0) {
			cout << x << endl;
		}

		else if(n % 4 == 1) {
			if(x % 2 == 0) cout << x - n << endl;
			else cout << x + n << endl;
		}
		
		else if(n % 4 == 2) {
			if(x % 2 == 0) cout << x + 1 << endl;
			else cout << x - 1 << endl;
		}
		
		else {
			if(x % 2 == 0) cout << x + n + 1 << endl;
			else cout << x - n - 1 << endl;
		}
	}
	return 0;
}