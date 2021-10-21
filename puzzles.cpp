#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	int n, m, arr[51], diff = 1000, i;

	cin >> n >> m;

	for(i = 0; i < m; i++) {
		cin >> arr[i];
	}

	sort(arr, arr + m);

	for(i = 0; i <= m - n; i++) {
		diff = min(diff, arr[i + n - 1] - arr[i]);
	}

	cout << diff << endl;

	return 0;
}