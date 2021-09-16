#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	unsigned long long int n, m, a, l, b, flagstones;

	cin >> n >> m >> a;

	if(n % a == 0)
		l = n/a;
	else l = (n/a) +1;

	if(m % a == 0)
		b = m/a;
	else b = (m/a)+1;

	flagstones = l*b;

	cout << flagstones << endl;
	
	return 0;
}