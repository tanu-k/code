#include <bits/stdc++.h>
#include <cmath>

using namespace std;

int main(int argc, char const *argv[])
{
	long long t, a, b, c, i;

	cin >> t;

	for(i = 0; i < t; i++) {
		 cin >> a >> b >> c;
		 if(a > b && a > c) cout << 0 << " ";
		 else cout << max(b - a + 1, c - a + 1) << " ";
		 if(b > a && b > c) cout << 0 << " ";
		 else cout << max(a - b+ 1, c - b + 1) << " ";
		 if(c > a && c > b) cout << 0 << endl;
		 else cout << max(a - c + 1, b - c + 1) << endl;
		
	}
	return 0;
}