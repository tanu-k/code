#include <bits/stdc++.h>

using namespace std;

int isPrime(int num) {
	
	int i;
	
	for(i = 2; i <= num/2; i++) {
		
		if(num%i == 0) 
			return 1;
	}
	
	return 0;
}

int goldenX(int n) {
	
	int y, x;
	
	for(x = 2; x<= n/2; x++) {
		y = n - x;
		
		if(isPrime(x) == 0 && isPrime(y) == 0) {
			return x;
		}
	}
	return -1;
}


int main(int argc, char const *argv[])
{
	int Q, N, i, n, x= 0, n1 = 0, x1 = 0;

	cin >> Q;

	for(i = 1; i <= Q; i++) {
		
		x1 = 0;
		
		cin >> N;
		
		if(N % 2!= 0) N--;
		
		for(n = N; n >= 1; n = n-2) {
			x = goldenX(n);
			
			if(x >= x1) {
				x1 = x;
				n1 = n;
			}
		}
		
		if(x1 == 0) cout << "no solution" << endl;
	 
	 else cout << n1 << "=" << x1 << "+" << n1-x1 << endl;
	}

	return 0;
}