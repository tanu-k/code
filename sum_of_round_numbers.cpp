#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	int n, m, k, l, t, s, j, a[10000001], i;

	cin >> t;

	while(t--) {
		cin >> n;
		j = 1;
		k = 1;

		while(n) {
			if(n % 10) {
				a[j] = k * (n % 10);
				j++;
			}
			n /= 10;
			k *= 10;
		}
		j--;
		cout << j << endl;

		for(i = j; i >= 1; i--) {
			cout << a[i] << " ";
		}
		cout << endl;
	}
	return 0;
}