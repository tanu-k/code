#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	int n, arr[100], count[101], position, i, highest, lowest;

	cin >> n;

	for(i = 0; i < 101; i++) {
		count[i] = 0;
	}

	for(i = 0; i < n; i++) {
		cin >> arr[i];
		count[arr[i]]++;
	}

	for(i = 0; i < 101; i++) {
		if(count[i] > 0) {
			lowest = i;
			break;
		}
	}

	for(i = 100; i > 0; i--) {
		if(count[i] > 0) {
			highest = i; 
			break;
		}
	}

	for(i = 0; i < n; i++) {
		if(arr[i] == highest) {
			highest = i;
			break;
		}
	}

	for(i = n - 1; i >= 0; i--) {
		if(arr[i] == lowest) {
			lowest = i;
			break;
		}
	}

	if(highest < lowest) position = highest + ((n - 1) - lowest);
	else position = highest + ((n - 1) - lowest) - 1;

	cout << position << endl;

	return 0;
}