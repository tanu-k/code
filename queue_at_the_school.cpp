#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	int n, t, i, j;

	cin >> n >> t;

	char s[n];

	cin >> s;

	for(i = 0; i < t; i++) {
		
		for(j = 0; j < n; j++) {
		
			if(s[j] == 'B' && s[j+1] == 'G') {
				s[j] = 'G';
				s[j+1] = 'B';
				j++;
			}
		}
	}

	cout << s << endl;

	return 0;
}