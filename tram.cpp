#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	int n, a, b, i, x = 0, x1 = 0;

	cin >> n;

	for(i = 0; i < n; i++) {
		
		cin >> a >> b;

		x -= a;
		x += b;

		if(x > x1) x1 = x;
	}

	cout << x1 << endl;
	
	return 0;
}