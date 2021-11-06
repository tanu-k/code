#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	int n, points;

	cin >> n >> points;

	int min(points), max(points), count = 0;

	while(n--) {
		cin >> points;
		if(points < min) {
			min = points;
			count++;
		}

		if(points > max) {
			max = points;
			count++;
		}
	}

	cout << count << endl;

	return 0;
}