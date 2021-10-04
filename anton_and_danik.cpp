#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	int n, i, anton = 0, danik = 0;

	char c;

	cin >> n;

	for(i = 0; i < n; i++) {
		cin >> c;
		if(c == 'A') anton++;
		else danik++;
	}

	if (anton > danik) cout << "Anton" << endl;
	else if(danik > anton) cout << "Danik" << endl;
	else cout << "Friendship" << endl;
	
	return 0;
}