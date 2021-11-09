#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	int n, count = 0, x, a = 0;

	cin >> n;

	while(n--) {
		cin >> x;
		if(x == -1) {
			if(a == 0) count++;
			else a--;
		}
		else {
			a += x;
		}
	}

	cout << count << endl;

	return 0;
}