#include <bits/stdc++.h>
#include <string>

using namespace std;

int main(int argc, char const *argv[])
{
	int i, n, count = 0;
	char s[14];

	cin >> n;

	for(i = 0; i < n; i++) {
		
		cin >> s;
		
		if(s[0] == 'T') count += 4;
		else if(s[0] == 'C') count += 6;
		else if(s[0] == 'O') count += 8;
		else if(s[0] == 'D') count += 12;
		else count += 20;
	}

	cout << count << endl;

	return 0;
}