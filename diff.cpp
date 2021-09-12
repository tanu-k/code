#include <bits/stdc++.h>

int diff(int a, int b) {
	int diff = a - b;
	return diff;
}

int main() {
	int a, b;
	scanf("%d%d", &a, &b);
	printf("%d\n", diff(a, b));
	return 0;
}