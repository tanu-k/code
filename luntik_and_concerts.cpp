#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	long long int t, a, b, c, i, diff;

	cin >> t;

	for(i = 0; i < t; i++) {
		
		cin >> a >> b >> c;

		diff = (a + b * 2 + c * 3) % 2;

		cout << diff << endl;
	}

	return 0;
}