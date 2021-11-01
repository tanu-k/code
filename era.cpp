#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	long long int t, n, i, a[101], count;

	cin >> t;

	while(t--) {
		cin >> n;
		count = 0;
		for(i = 0; i < n; i++) {
			cin >> a[i];
		}
		for(i = 0; i < n; i++) {
			if(i == 0) count += a[i] - 1;
			else if(a[i] > count + i + 1) {
				count += a[i] - (count + i + 1);
			}
		}
		cout << count << endl;
	}
	return 0;
}

