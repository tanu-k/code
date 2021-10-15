#include <bits/stdc++.h>
#include <string>

using namespace std;

int main(int argc, char const *argv[])
{
	string s;
	int i, flag = 0;

	cin >> s;

	for(i = 1; i < s.length(); i++) {
		if(s[i] >= 'a' && s[i] <='z') {
			flag = 1;
			break;
		}	
	}

	if(flag == 0) {
		for(i = 0; i < s.length(); i++) {
			if(s[i] >= 'A' && s[i] <= 'Z') s[i] = tolower(s[i]);
			else s[i] = toupper(s[i]);
		}
	}

	cout << s << endl;

	return 0;
}