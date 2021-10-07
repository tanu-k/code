#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	int n, i, x, y, count = 1;

	cin >> n >> x;

	for(i = 1; i < n; i++) {

		cin >> y;

		if(x != y) {
			count++;
		}

		x = y;
	}

	cout << count << endl;

	return 0;
}