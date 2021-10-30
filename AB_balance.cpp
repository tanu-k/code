#include <bits/stdc++.h>
#include <string>

using namespace std;

int main(int argc, char const *argv[])
{
	int t, i;
	string s;

	cin >> t;

	for(i = 0; i < t; i++) {
		cin >> s;
		if(s[0] != s[s.length() - 1]) {
			if(s[0] == 'a') {
				s[0] = 'b';
			}
			else {
				s[0] = 'a';
			}
		}
		cout << s << endl;
	}

	return 0;
}