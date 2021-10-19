#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	int n, i, x[101], y[101], arr[101], p, q;

	cin >> n >> p;

	for(i = 0; i <= n; i++) {
		arr[i] = 0;
	}

	for(i = 0; i < p; i++) {
		cin >> x[i];
		arr[x[i]]++;
	}

	cin >> q;

	for(i = 0; i < q; i++) {
		cin >> y[i];
		arr[y[i]]++;
	}

	for(i = 1; i <= n; i++) {
		if(arr[i] == 0) {
			cout << "Oh, my keyboard!" << endl;
			return 0;
		}
	}

	cout << "I become the guy." << endl;

	return 0;
}