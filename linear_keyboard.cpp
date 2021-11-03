#include <bits/stdc++.h>
#include <string>
#include <cmath>

using namespace std;

int main(int argc, char const *argv[])
{
	int t, i, count, j, position[51];
	string k, s;

	cin >> t;

	for(i = 0; i < t; i++) {
		cin >> k >> s;
		count = 0;
		for(j = 0; j < s.length(); j++) {
			position[j] = k.find(s[j]) + 1;
		}
		for(j = 1; j < s.length(); j++) {
			count += abs(position[j] - position[j - 1]);
		}
		cout << count << endl;
	}
	return 0;
}