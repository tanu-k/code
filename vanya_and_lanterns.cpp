#include <bits/stdc++.h>

using namespace std;
 
float max(float a, float b) {
	
	if(a >= b) return a;
	
	return b;
}

int main(int argc, char const *argv[])
{
	int n, l, i, a[1001];
	float d;

	cin >> n >> l;

	for(i = 0; i < n; i++) {
		cin >> a[i];
	}

	sort(a, a + n);
	d = max(a[0], l - a[n - 1]);

	for(i = 0; i < n - 1; i++) {
		d = max(d, (a[i + 1] - a[i]) / 2.0);
	}

	cout << fixed << setprecision(10) << d << endl;

	return 0;
}