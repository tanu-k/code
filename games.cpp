#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	int n, a[31], h[31], i, count = 0, x, j;

	cin >> n;

	for(i = 0; i < n; i++) {
		cin >> h[i] >> a[i];

		for(j = 0; j < i; j++) {
			if(h[i] == a[j]) count++;
			if(a[i] == h[j]) count++;
		}
	}

	cout << count << endl;

	return 0;
}