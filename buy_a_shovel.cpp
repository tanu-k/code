#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	int k, r, i; 

	cin >> k >> r;

	for(i = 1; i <= 10; i++) {
		if(k * i % 10 == 0 || k * i % 10 == r) {
			cout << i << endl;
			return 0;
		}
	}
	return 0;
}