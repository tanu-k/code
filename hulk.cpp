#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	int n, i;

	cin >> n;

	for(i = 1; i <= n; i++) {

		if(i == n && i % 2 != 0) {
			cout << "I hate it" << endl;
		}

		else if(i == n && i % 2 == 0) {
			cout << "I love it" << endl;
		}

		else if(i % 2 != 0) {
			cout << "I hate that ";
		}

		else cout << "I love that ";
	}
	
	return 0;
}