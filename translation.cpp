#include <bits/stdc++.h>
#include <string>

using namespace std;

int main(int argc, char const *argv[])
{
	string s, t;
	int i;

	cin >> s >> t;

	if(s.length() != t.length()) {
		cout << "NO" << endl;
		return 0;
	}
		
	for(i = 0; i < s.length(); i++) {
		
		if(s[i] != t[t.length() - i - 1]) {

			cout << "NO" << endl;

			return 0;
		}
		
	}

	cout << "YES" << endl;
	
	return 0;
}