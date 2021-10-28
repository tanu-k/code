#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	long long t, n, i;

	cin >> t;

	for(i = 0; i < t; i++) {

		cin >> n;

		if(n <= 2) cout << 0 << endl;
		else {
			if(n % 2 == 0) cout << (n / 2) - 1 << endl;
			else cout << n / 2 << endl;
		}
	}

	return 0;
}