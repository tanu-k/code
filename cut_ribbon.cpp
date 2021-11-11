#include <bits/stdc++.h>

using namespace std;
int a, b, c;
int arr[4001];

int rec(int n){
	if(n == 0) return 0;
	if(n < 0) return -1;
	if(arr[n] != -2) return arr[n];
	arr[n] = max(max(rec(n - a), rec(n - b)), rec(n - c));
	if(arr[n] == -1) return -1;
	else {
		arr[n]++;
		return arr[n];
	}
}

int main(int argc, char const *argv[])
{
	int n, i;

	cin >> n >> a >> b >> c;

	for(i = 0; i <= n; i++) {
		arr[i] = -2;
	}

	cout << rec(n) << endl;

	return 0;
}