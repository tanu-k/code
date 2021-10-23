#include <bits/stdc++.h>
#include <string>

using namespace std;

int main(int argc, char const *argv[])
{
	int n, i, a[123];
	char s[101];

	cin >> n >> s;

	for(i = 0; i < 123; i++) {
		a[i] = 0;
	}

	for(i = 0; i < strlen(s); i++) {
			if(s[i] >= 'A' && s[i] <= 'Z') s[i] = tolower(s[i]);
			a[s[i]] = 1;
	}

	for(i = 97; i < 123; i++) {
		if(a[i] < 1) {
			cout << "NO" << endl;
			return 0;
		}
	}

	cout << "YES" << endl;

	return 0;
}