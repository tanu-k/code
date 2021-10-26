#include <bits/stdc++.h>
#include <string>
using namespace std;

int main(int argc, char const *argv[])
{
	int t, i, j, x;
	string s;
	char a;

	cin >> t;

	for(i = 0; i < t; i++) {
		
		cin >> s;
		
		a = s[0];
		x = 0;

		for(j = 1; j < s.length(); j++) {
			if(s[j] < a) {
				a = s[j];
				x = j;
			}
		}
		cout << a << " ";
		
		for(j = 0; j < s.length(); j++) {
			if(j != x) cout << s[j];
		}

		cout << endl;

	}

	return 0;
}