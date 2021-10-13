#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	int n, i, j, taxi = 0;

	cin >> n;

	int s[n], arr[5] = {0,0,0,0,0};

	for(i = 0; i < n; i++) {
		cin >> s[i];
		arr[s[i]]++;
	}

	taxi += arr[4];

	taxi += arr[3];
	arr[1] = max(arr[1] - arr[3], 0);

	taxi += arr[2] / 2;
	if(arr[2] % 2) {
		arr[1] = max(arr[1] - 2, 0);
		taxi++;
	}
	
	taxi += arr[1] / 4;
	if(arr[1] % 4) taxi++;

	cout << taxi << endl;

	return 0;
}