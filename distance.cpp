#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	int t, x, y;

	cin >> t;

	while(t--) {
		
		cin >> x >> y;

		if(x % 2 == 0 && y % 2 == 0) cout << x / 2 << " " << y / 2 << endl;
		else if(x % 2 != 0 && y % 2 != 0) {
			if(x < y) cout << (x / 2) + 1 << " " << y / 2 << endl;
			else cout << x / 2 << " " << (y / 2) + 1 << endl;
		}
		else cout << - 1 << " " << - 1 << endl;
	}
	return 0;
}