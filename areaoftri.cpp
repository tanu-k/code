#include <bits/stdc++.h>
#include <math.h>

int main(int argc, char const *argv[])
{
	int s, a;
	float area;
	scanf("%d",&s);
	area = (sqrt(3)/4)*pow(float(s),2);
	a = int(area);
	printf("%0.3f\n%d\n",area, a);
	return 0;
}