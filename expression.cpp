#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	int a, b, c, exp;

	cin >> a >> b >> c;

	exp = a + b + c;
	exp = max(exp, a * (b + c));
	exp = max(exp, a * b * c);
	exp = max(exp, (a + b) * c);
	exp = max(exp, a + b * c);

	cout << exp << endl;

	return 0;
}