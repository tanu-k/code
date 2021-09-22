#include <bits/stdc++.h>
#include <cmath>

using namespace std;

int main(int argc, char const *argv[])
{
	int i, j, m, x;

	for(i = 1; i <= 5; i++) {
		
		for(j = 1; j <= 5; j++) {
			
			cin >> x;

			if(x == 1) {

				cout << abs(i - 3) + abs(j - 3) << endl;
			}
		}
	}

	return 0;

}