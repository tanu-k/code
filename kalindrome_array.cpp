#include <bits/stdc++.h>

using namespace std;

int deletedPalindrome(int a[], int i , int j, int x, int n) {
	
	while(i < j && min(i, j) >= 0 && max(i, j) < n) {
		if(a[i] == x) i++;
		else if(a[j] == x) j--;
		else if(a[i] != a[j]) return 0;
		else {
			i++;
			j--;
		}
	}

	return 1;
}

int main(int argc, char const *argv[])
{
	int t, n, i, j, x, y, k;

	cin >> t;

	while(t--) {
		cin >> n;
		int a[n];

		for(i = 0; i < n; i++) {
			cin >> a[i];
		}

		i = 0;
		j = n - 1;
		while(i < j) {
			if(a[i] != a[j]) {
				x = a[i];
				y = a[j];
				break;
			}
			i++;
			j--;
		}

		k = deletedPalindrome(a, i, j, x, n);
		if(!k) k = deletedPalindrome(a, i, j, y, n);

		if(k) cout << "YES" << endl;
		else cout << "NO" << endl;
	}

	return 0;
}