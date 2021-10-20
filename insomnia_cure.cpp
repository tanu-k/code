#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	int k, l, m, n, d, i, count = 0;

	cin >> k >> l >> m >> n >> d;

	int arr[d + 1]; 

	for(i = 0; i < d + 1; i++) {
		arr[i] = 0;
	}

	for(i = 1; i < d + 1; i++) {
		if(i % k == 0) arr[i] = 1;
	}

	for(i = 1; i < d + 1; i++) {
		if(arr[i] == 0) {
			if(i % l == 0) arr[i] = 1;
		}
	}

	for(i = 1; i < d + 1; i++) {
		if(arr[i] == 0) {
			if(i % m == 0) arr[i] = 1;
		}
	}

	for(i = 1; i < d + 1; i++) {
		if(arr[i] == 0) {
			if(i % n == 0) arr[i] = 1;
		}
	}

	for(i = 1; i < d + 1; i++) {
		if(arr[i] == 0) count++;
	}

	cout << d - count << endl;
	return 0;
}