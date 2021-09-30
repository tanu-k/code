#include <bits/stdc++.h>
#include <string>

using namespace std;

int main(int argc, char const *argv[])
{
	char s[100];
	int i, flag = 1;

	cin >> s;

	for(i = 0; i < strlen(s); i++) {
		if(flag == 1) {
			if(s[i] == 'h') flag++;
			continue;
		}

		if(flag == 2) {
			if(s[i] == 'e') flag++;
			continue;
		}

		if(flag == 3) {
			if(s[i] == 'l') flag++;
			continue;
		}

		if(flag == 4) {
			if(s[i] == 'l') flag++;
			continue;
		}

		if(flag == 5) {
			if(s[i] == 'o') flag ++;
		}
	}

	if(flag == 6) cout << "YES" << endl;
	else cout << "NO" << endl;

	return 0;
}