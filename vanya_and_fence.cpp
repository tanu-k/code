#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	int n, h, i, a, width = 0;

	cin >> n >> h;

	for(i = 0; i < n; i++) {
		cin >> a;
		if(a > h) width += 2;
		else width++;
	}

	cout << width << endl;
	
	return 0;
}