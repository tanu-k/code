#include <bits/stdc++.h>
#include <string>

using namespace std;

int main(int argc, char const *argv[])
{
	char s[100];
	int i, j, count;

	cin >> s;

	for(i = 0; i < strlen(s); i++) {
		count = 1;
		for(j = i+1; j < strlen(s); j++) {
			if(s[i] == s[j]) count ++;
			else if(s[i] != s[j]) break;
		}
		if(count >= 7) break;
	}

	if(count >= 7) cout << "YES" << endl;
	
	else cout << "NO" << endl;
	
	return 0;
}