#include <bits/stdc++.h>
#include <string>

using namespace std;

int main(int argc, char const *argv[])
{
	string str; 
	int arr[123], i, count = 0;

	getline(cin, str, '\n');

	for(i = 0; i < 123; i++) {
		arr[i] = 0;
	}

	for(i = 0; i < str.length(); i++) {
		if(str[i] >= 'a' && str[i] <= 'z') {
			arr[str[i]] = 1;
		}
	}

	for(i = 97; i < 123; i++) {
		if(arr[i] > 0) count++;
	}

	cout << count << endl;

	return 0;
}