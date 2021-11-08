#include <bits/stdc++.h>
#include <cmath>

using namespace std;

int main(int argc, char const *argv[])
{
	int t, a, b;

	cin >> t;

	while(t--) {
		cin >> a >> b;
		cout << (abs(a - b) + 9) / 10 << endl;
	}

	return 0;
}