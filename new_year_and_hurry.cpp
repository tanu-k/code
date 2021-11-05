#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	int n, k, i, count;

	cin >> n >> k;

	count = 240 - k;

	for(i = 0; i < n; i++) {
		count -= 5 * (i + 1);
		if(count < 0) break;
	}

	cout << i << endl;

	return 0;
}