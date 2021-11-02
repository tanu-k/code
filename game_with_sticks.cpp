#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	int n, m, i = 0, x;

	cin >> n >> m;

	x = n * m;

	while(x > 0) {
		x -= n + m - 1;
		n--;
		m--;
		i++;
	}

	if(i % 2 == 0) cout << "Malvika" << endl;
	else cout << "Akshat" << endl;
	
	return 0;
}