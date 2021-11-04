#include <bits/stdc++.h>
#include <string>
#include <map>

using namespace std;

int main(int argc, char const *argv[])
{
	int n, i;
	string s;
	map<string, int > map;

	cin >> n;
	
	for(i = 0; i < n; i++) {
		cin >> s;
		if(map[s] == 0) {
			map[s]++;
			cout << "OK" << endl;
		}
		else {
			cout << s << map[s] << endl;
			map[s]++;
		}
	}
	return 0;
}