#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	int n, i, x;

	cin >> n;

	for(i = 0; i < n; i++) {
		
		cin >> x;

		if(x == 1) {
			cout << "hard" << endl;
			return 0;
		}
	}

	cout << "easy" << endl;
	
	return 0;
}