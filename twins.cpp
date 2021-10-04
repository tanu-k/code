#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	int n, i, j, a, k, m, tmp, l, sum = 0, c = 0, count = 0;

	cin >> n;

	int arr[n];

	//input array
	for(i = 0; i < n; i++) {
		cin >> a;
		arr[i] = a;
	}

	//descending order
	for(j = 0; j < n; j++) {
		for(k = j + 1; k < n; k++) {
			if(arr[j] < arr[k]) {
				tmp = arr[j];
				arr[j] = arr[k];
				arr[k] = tmp;
			}
		}
	}

	//sum
	for(l = 0; l < n; l++) {
		sum += arr[l];
	}

	//number of coins
	for(m = 0; m < n; m++) {
		count++;
		c += arr[m];
		if(c > sum/2) {
			cout << count << endl;
			break;
		}
	}
	return 0;
}