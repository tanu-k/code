#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	int n, i, x = 0;
	char s[4];

	cin >> n;
	
	for(i = 1; i < = n; i++) {
		
		cin >> s;
		
		if(s[1] == '+') x++;
		
		else x--;
	}
	
	cout << x << endl;
	
	return 0;
}