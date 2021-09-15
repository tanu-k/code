#include <bits/stdc++.h>

int main(int argc, char const *argv[])
{
	
    int n, n1, rev = 0, remainder;
    
    scanf("%d", &n);

    n1 = n;

    while (n != 0) {
        remainder = n % 10;
        rev = rev * 10 + remainder;
        n = n/10;
    }

    if(rev == n1) printf("YES\n");
    else printf("NO\n");

    return 0;
}