#include <bits/stdc++.h>
#include <string>

using namespace std;

int main(int argc, char const *argv[])
{
	char p[100];
	int i;

	cin >> p;

	for(i = 0; i < strlen(p); i++) {
		if(p[i] == 'H' || p[i] == 'Q' || p[i] == '9') {
			cout << "YES" << endl;
			return 0;
		}
	}

	cout << "NO" << endl;
	
	return 0;
}