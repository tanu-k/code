#include <bits/stdc++.h>
#include <string>

using namespace std;

int main(int argc, char const *argv[])
{
	char str1[100], str2[100];

	int result;

	cin >> str1 >> str2;

	result = strcasecmp(str1, str2);

	if(result == 0) cout << 0 << endl;

	else if(result < 0) cout << -1 << endl;

	else cout << 1 << endl;

	return 0;
}