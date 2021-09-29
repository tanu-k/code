#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	int x, count;

	cin >> x;

		if(x > 5 && x % 5 == 0) {
			
			count = 0;

			count = x / 5;

			cout << count << endl;
		}
		
		else if(x > 5 && x % 5 != 0) {

			count = 1;

			count += x / 5;

			cout << count << endl;
		}

		else cout << 1 << endl;
	
	return 0;
}