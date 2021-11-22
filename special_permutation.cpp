#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	int t, n, a, b, i, x, y, arr[105], count[105], flag;

	cin >> t;

	while(t--) {

		cin >> n >> a >> b;

		flag = 0;
		x = n;
		y = 1;
		arr[1] = a;
		arr[n] = b;
		memset(count, 0, sizeof(count));
		count[a]++;
		count[b]++;

			for(i = 2; i <= n / 2; i++) {
				if(x != b) {
					arr[i] = x;
					count[x]++;
				}
				else {
				x--;
				arr[i] = x;
				count[x]++;
				}
				x--;
			}

			for(i = (n / 2) + 1; i < n; i++) {
				if(y != a) {
					arr[i] = y;
					count[y]++;
				}
				else {
					y++;
					arr[i] = y;
					count[y]++;
				}
				y++;
			}

			for(i = 1; i <= n; i++) {
				if(count[i] != 1) {
					flag = 1;
					cout << -1;
					break;
				}
			}
			if(flag == 0) {
				for(i = 1; i <= n; i++) {
					cout << arr[i] << " ";
				}
			} 
			

			cout << endl;

		// x = a;
		// y = b;
		// memset(arr, 0, sizeof(arr));

		// if(n - a < n / 2 || n - b > n / 2) cout << - 1;
		// else {
		// 	for(i = 0; i < n / 2; i++) {
		// 		if(x == b) continue;
		// 		if(arr[x] == 0) cout << x << " ";
		// 		arr[x] = 1;
		// 		x += 1;
		// 	}

		// 	for(i = n / 2; i < n; i++) {
		// 		if(y == a) continue;
		// 		if(arr[y] == 0) {
		// 			cout << y << " ";
		// 			arr[y] = 1;
		// 		}
		// 		y -= 1;
		// 	}
		// } 

		// cout << endl;
	}
	
	return 0;
}