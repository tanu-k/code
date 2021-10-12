#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	int n, i;
	float p, x = 0;

	cin >> n;

	for(i = 0; i < n; i++) {
		
		cin >> p;

		x += p;
	}
	
	cout << fixed << setprecision(6) << x / n << endl;

	return 0;
}