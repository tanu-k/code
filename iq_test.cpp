#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	int n, arr[101], odd = 0, even = 0, last_odd, last_even, i;

	cin >> n;

	for(i = 0; i < n; i++) {
		cin >> arr[i];
		if(arr[i] % 2 == 0) {
			even++;
			last_even = i;
		}

		else {
			odd++;
			last_odd = i;
		}
	}

	if(even < odd) cout << last_even + 1 << endl;
	else cout << last_odd + 1 << endl;

	return 0;
}