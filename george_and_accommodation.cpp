#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	int n, i, p, q, count = 0;

	cin >> n;

	for(i = 0; i < n; i++) {
		
		cin >> p >> q;

		if(q - p >= 2) count++;
	}

	cout << count << endl;

	return 0;
}