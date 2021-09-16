#include <bits/stdc++.h>

int main(int argc, char const *argv[])
{
	long n, m, factorial = 1;
	int k = 0, i;

	scanf("%ld%ld", &n, &m);

	for(i = 1; factorial <= m; i++) {
		factorial= factorial*i;
		if(factorial >= n && factorial <= m)
			k++;
	}
	printf("%d\n", k);

	return 0;
}