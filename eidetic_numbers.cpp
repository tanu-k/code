#include <bits/stdc++.h>

using namespace std;

int sumDigits(int x) {
	
	int  y, sum = 0;

	while(x > 0) {
		y = x%10;
		sum += y;
		x = x/10;
	} 

	return sum;
}

int numDigits(int z) {
	
	int count = 0;
	
	while(z != 0) {
		z = z/10;
		count++;
	}

	return count;
}

void printDigits(int z, int n) {
	
	int x;
	
	while(n != 0) {
		x = z/pow(10,n-1);
		if(n == 1) {
			cout << x;
		}
		else {
			cout << x << "+";
		}
		z = z - (x*pow(10, n-1));
		n--;
	}
}

int main(int argc, char const *argv[])
{
	int Q, n, m, i, flag, nd, sm, md;

	cin >> Q;

	for(i = 1; i <= Q; i++) {
		cin >> n;
		flag = 0;
		nd = numDigits(n);

		for(m = n; m >= max(n - 9 * nd, 0); m--) {
			sm = sumDigits(m);
			if(n == m + sm) {
				md = numDigits(m);
				
				cout << n << " = " << m << " + (";
				
				printDigits(m, md);
				
				cout << ")" << endl;
				flag = 1;
				break;
			}
		}
		if(flag == 0) {
			cout << "No solutions" << endl; 
		}
	}
	return 0;
}