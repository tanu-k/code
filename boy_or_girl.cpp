#include <bits/stdc++.h>
#include <string>

using namespace std;

int main(int argc, char const *argv[])
{
	char s[100];
	int i, j, flag, count = 0;

	cin >> s;

	for(i = 0; i < strlen(s); i++) {
		flag = 0;
		for(j = i + 1; j < strlen(s); j++) {
			if(s[i] == s[j]) {
				flag = 1;
				break;
			}
		}
		if(flag == 0) count++;
	}

	if(count % 2 == 0) cout << "CHAT WITH HER!" << endl;
	else cout << "IGNORE HIM!" << endl;
	
	return 0;
}