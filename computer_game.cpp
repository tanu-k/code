#include <bits/stdc++.h>
#include <string>

using namespace std;

int main(int argc, char const *argv[])
{
	int t, n, i, j, flag = 0;

	cin >> t;

	for(i = 0; i < t; i++) {
		
		cin >> n;

		flag = 0;

		char s1[n], s2[n];

		cin >> s1 >> s2;

		for(j = 0; j < n; j++) {
			
			if(s1[j+1] =='1' && s2[j+1] == '1') {
			
				flag = 1;

				break;
			
			}
		}

		if(flag == 1) cout << "NO" << endl;

		else cout << "YES" << endl;
	}
	return 0;
}