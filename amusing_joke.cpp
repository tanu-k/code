#include <bits/stdc++.h>
#include <string>

using namespace std;

int main(int argc, char const *argv[])
{
	int i, a[91], count[91], j;
	char s[100];

	for(i = 0; i < 91; i++) {
		a[i] = 0;
		count[i] = 0;
	}

	for(i = 0; i < 2; i++) {
		cin >> s;
		for(j = 0; j < strlen(s); j++) {
			a[s[j]]++;
		}
	}

	cin >> s;

	for(i = 0; i < strlen(s); i++) {
		count[s[i]]++;
	}

	for(i = 65; i < 91; i++) {
		if(count[i] != a[i]) {
			cout << "NO" << endl;
			return 0;
		}
	}

	cout << "YES" << endl;
	
	return 0;
}