#include <bits/stdc++.h>
#include <string>

using namespace std;

int main(int argc, char const *argv[])
{
	char s1[101], s2[101];
	int i;

	cin >> s1 >> s2;

	for(i = 0; i < strlen(s1); i++) {
		if(s1[i] == s2[i]) cout << 0;
		else cout << 1;
	}

	cout << endl;

	return 0;
}