#define _USE_MATH_DEFINES
#include <bits/stdc++.h>
#include <cmath>

int main(int argc, char const *argv[])
{
	float h, a, H, ar, x, y, b;
	scanf("%f%f", &h, &a);
	ar = a * M_PI/180;
	H = h/ sin(ar);
	if(H > 10*h) printf("INF\n");
	else{
		printf("%0.4f\n",H); 
	    x = ((int)(H*100))/100.0;
	    printf("%0.4f\n",x);
	    y = H - x;
	    if (y > 0)
	    {
	    	b = x + 0.01;
	    	printf("%0.04f\n", b);
	    }
	} 
return 0;
}