#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	int n, i, count = 0;
	string s;

	cin >> n >> s;

	for(i = 0; i < n; i++) {
		if(s[i] == s[i + 1]) count++;
	}

	cout << count << endl;
	
	return 0;
}