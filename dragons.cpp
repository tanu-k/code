#include <bits/stdc++.h>
struct point
{
	long long x;
	long long y;
};

using namespace std;

bool compare(struct point a, struct point b) {
	if(a.x < b.x) {
		return 1;
	}
	else return 0;
}

int main(int argc, char const *argv[])
{
	long long s, n, x, y, i;

	cin >> s >> n;

	struct point a[n];

	for(i = 0; i < n; i++) {
		cin >> a[i].x >> a[i].y;
	}

	sort(a, a + n, compare);

	for(i = 0; i < n; i++) {
		if(s > a[i].x) s += a[i].y;
		else {
			cout << "NO" << endl;
			return 0;
		}
	}

	cout << "YES" << endl;

	return 0;
}