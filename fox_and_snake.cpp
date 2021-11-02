#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	int n, m, i, flag = 0, j;

	cin >> n >> m;

	for(i = 0; i < n; i++) {
		if(i % 2 == 0) {
			for(j = 0; j < m; j++) {
				cout << '#';
			}
		}
		else {
			if(flag == 0) {
				for(j = 0; j < m; j++) {
					if(j == m - 1) cout << '#';
					else cout << '.';
				}
				flag = 1;
			}

			else if(flag == 1) {
				for(j = 0; j < m; j++) {
					if(j == 0) cout << '#';
					else cout << '.';
				}
				flag = 0;
			}
		}
		cout << endl;
	}
	return 0;
}