#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	int a, b, x;

	cin >> a >> b;

	cout << min(a, b) << " ";

	cout << (max(a, b) - min(a, b))/ 2  << endl;
	
	return 0;
}