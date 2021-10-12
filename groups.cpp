#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	int t, n, i, j, arr[1000][5], l, k, sum1, sum2, sum3, flag;

	cin >> t;

	for(i = 0; i < t; i++) {
		 
		cin >> n;

		flag = 0;

		for(j = 0; j < n; j++) {
		 	for(l = 0; l < 5; l++) {
		 	 	cin >> arr[j][l];
		 	}
		}

		for(j = 0; j < 5; j++) {
			for(l = j + 1; l < 5; l++) {
				sum1 = 0;
				sum2 = 0;
				sum3 = 0;
		 		for(k = 0; k < n; k++) {
	 	 			sum1 += arr[k][j];
	 	 			sum2 += arr[k][l];
	 	 			if(arr[k][j] == 0 && arr[k][l] == 0) sum3++;
	 	 		}
	 	 		if(sum1 >= n / 2 && sum2 >= n /2 && sum3 == 0) {
	 	 			flag = 1;
	 	 			break;
	 	 		}
	 	 	}
	 	 	if(flag == 1) break;
		}
		if(flag == 0) cout << "NO" << endl;
		else cout << "YES" << endl;
	}

	return 0;
}
