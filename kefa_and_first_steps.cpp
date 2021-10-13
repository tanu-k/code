#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	long long n, i, count = 1, final_count = 1;

	cin >> n;

	long long arr[n];

	for(i = 0; i < n; i++) {
		cin >> arr[i];
	}

	for(i = 1; i < n; i++) {
		if(arr[i] >= arr[i - 1]) count++;
		if(count > final_count && count != 1) final_count = count;
		if(arr[i] < arr[i - 1]) count = 1;
	}

	cout << final_count << endl;

	return 0;
}