#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	int n, i, x;

	cin >> n;

	int arr[n];

	for(i = 1; i <= n; i++) {
		 
		 cin >> x;
		 
		 arr[x] = i;
	}

	for(i = 1; i <=n; i++) {
		if(i < n) cout << arr[i] << " ";
		else cout << arr[i] << endl;
	}
	return 0;
}