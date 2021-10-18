#include <bits/stdc++.h>

using namespace std;

int isPrime(int sum) {

	int i, prime = 1;
	for (i = 2; i <= sum / 2; ++i) {
            if (sum % i == 0) {
            	prime = 0;
                return prime;
            }
    }
    return prime;
}

int main(int argc, char const *argv[])
{
	int t, arr[100], n, i, j, sum, flag;

	cin >> t;

	for(i = 0; i < t; i++) {

		cin >> n;

		flag = 0;
		sum = 0;

		for(j = 0; j < n; j++) {
			 cin >> arr[j];
			 sum += arr[j];
		}

		if(sum % 2 == 0 || isPrime(sum) == 0) {
			cout << n << endl;
			for(j = 0; j < n; j++) {
				cout << j + 1 << " ";
			}
			cout << endl;
		}

		else {
			cout << n - 1 << endl;
			for(j = 0; j < n; j++) {
				if(flag == 0) {
					if(arr[j] % 2 != 0) {
						flag = 1;
						continue;
					}
				}
				cout << j + 1 << " ";
			}
			cout << endl;
		}
	}
	
	return 0;
}