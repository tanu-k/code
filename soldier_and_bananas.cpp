#include <bits/stdc++.h>
#include <cmath>

using namespace std;

int main(int argc, char const *argv[])
{
	int k, n, w, total_cost, i, x = 0;

	cin >> k >> n >> w;

	for(i = w; i >= 1; i--) {
		
		x = x + i;
	}

	total_cost = k * x;

	if(n >= total_cost) cout << 0 << endl;
	
	else cout << total_cost - n << endl;
	
	return 0;
}