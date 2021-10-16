#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	int s1, s2, s3, s4, count = 0;

	cin >> s1 >> s2 >> s3 >> s4;

	if(s2 == s1) count++;
	if(s3 == s1 || s3 == s2) count++;
	if(s4 == s1 || s4 == s2 || s4 == s3) count++;

	cout << count << endl;
	
	return 0;
}