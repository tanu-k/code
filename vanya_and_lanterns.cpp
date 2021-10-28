#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	int n, l, i, a[1001], x;
	float d;

	cin >> n >> l;

	for(i = 0; i < n; i++) {
		cin >> a[i];
	}

	sort(a, a + n);
	x = 2 * max(a[0], l - a[n - 1]);
	
	for(i = 0; i < n - 1; i++) {
		x = max(x, a[i + 1] - a[i]);
	}

	d = (float)x / 2;

	cout << fixed << setprecision(10) << d << endl;

	return 0;
}