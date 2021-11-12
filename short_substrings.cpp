#include <bits/stdc++.h>
#include <string>

using namespace std;

int main(int argc, char const *argv[])
{
	int t, i;
	string s;

	cin >> t;

	while(t--) {
		cin >> s;
		for(i = 0; i < s.length(); i += 2) {
			cout << s[i];
		}
		if(s.length() % 2 == 0) cout << s[s.length() - 1] << endl;
	}

	return 0;
}