#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	int n, i;

	cin >> n;

	int arr[14] = {4, 7, 44, 47, 74, 77, 444, 447, 474, 477, 744, 747, 774, 777};

	for(i = 0; i < 14; i++) {
		if(n % arr[i] == 0) {
			cout << "YES" << endl;
			return 0;
		}
	}

	cout << "NO" << endl;

	return 0;
}