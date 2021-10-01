#include <bits/stdc++.h>
#include <string>

using namespace std;

int main(int argc, char const *argv[])
{
	string s;
	int i, count = 0;

	cin >> s;

	for(i = 0; i < s.length(); i++) {
		if(s[i] == '4' || s[i] == '7') count++;
	}

	if( count == 4 || count == 7) cout << "YES" << endl;
	else cout << "NO" << endl;

	return 0;
}