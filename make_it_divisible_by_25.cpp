#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	long long t, n, i, flag1, flag2, count1, count2, count, last;

	cin >> t;

	for(i = 0; i < t; i++) {
		
		flag1 = 0; flag2 = 0; count = 0; count1 = 0; count2 = 0;

		cin >> n;

		while(n != 0) {
			last = n % 10;
			n = n / 10;
			count++;

			if(flag1 == 0) {
				if(last == 0) {
					flag1 = 1;
				}
				else count1++;
			}
			else if(flag1 == 1) {
				if(last == 0 || last == 5) {
					flag1 = 2;
				} 
				else count1++;
			}

			if(flag2 == 0) {
				if(last == 5) {
					flag2 = 1;
				}
				else count2++;
			}
			else if(flag2 == 1) {
				if(last == 2 || last == 7) {
					flag2 = 2;
				} 
				else count2++;
			}

		}
		
		if(flag1 == 2 && flag2 == 2) cout << min(count1, count2) << endl;
		else if(flag1 == 2) cout << count1 << endl;
		else if(flag2 == 2) cout << count2 << endl;
		else cout << count << endl;
		}

	return 0;
}