#include <bits/stdc++.h>
#include <string>

using namespace std;

void low(char s[]) {
	
	int length, i, c;
	
	length = strlen(s);
	
	for(i = 0; i < length; i++) {
		c = s[i];
		if(isupper(c)) {
			s[i] = tolower(c);
		}
	}
}

void up(char s[]) {
	
	int length, i, c;
	
	length = strlen(s);
	
	for(i = 0; i < length; i++) {
		c = s[i];
		if(islower(c)) {
			s[i] = toupper(c);
		}
	}
}

int main(int argc, char const *argv[])
{
	char s[100];
	int i, upper = 0, lower = 0;

	cin >> s;

	for(i = 0; i < strlen(s); i++) {
		if(s[i] >= 'A' && s[i] <= 'Z') upper++;
		else lower++;
	}

	if(upper > lower) up(s);
	else low(s);

	cout << s << endl;
	
	return 0;
}