#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	int t, i, a, b;

	cin >> t;

	for(i = 0; i < t; i++) {
		cin >> a >> b;
		if(a % b == 0) cout << 0 << endl;
		else cout << b - a % b << endl;
	}

	return 0;
}