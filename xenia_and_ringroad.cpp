#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	long long int n, m, i, count = 0, curr = 1, a;

	cin >> n >> m;

	for(i = 0; i < m; i++) {
		cin >> a;
		if(a >= curr) count += a - curr;
		else count += n - (curr - a);
		curr = a;
	}

	cout << count << endl;

	return 0;
}