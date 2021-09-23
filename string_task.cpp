#include <bits/stdc++.h>
#include <string>

using namespace std;

void lower(char s[]) {
	
	int length, i, c;
	
	length = strlen(s);
	
	for(i = 0; i < length; i++) {
		c = s[i];
		if(isupper(c)) {
			s[i] = tolower(c);
		}
	}
}

int main(int argc, char const *argv[])
{
	char s[100];
	int i;

	cin >> s;

	lower(s);

	for(i = 0; i < strlen(s); i++) {
		if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'y' ) {
			continue;
		}

		else cout << '.' << s[i];
	}
	cout << endl;

	return 0;
}