#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	int n, a[101], arr[101], i;

	cin >> n;

	for(i = 0; i < 101; i++) {
		arr[i] = 0;
	}

	for(i = 0; i < n; i++) {
		cin >> a[i];
		arr[a[i]]++;
	}

	for(i = 0; i < 101; i++) {
		while(arr[i] != 0) {
			cout << i << " ";
			arr[i]--;
		}
	}

	cout << endl;

	return 0;
}