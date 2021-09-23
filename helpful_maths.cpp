#include <bits/stdc++.h>
#include <string>

using namespace std;

void printDigits(char a, int n) {
	
	int i;
	
	for(i = 0; i < n; i++) {
		
		cout << '+' << a;
	}
}

int printer(char a, int n, int flag) {
	
	if(n == 0) return flag;

	if(flag == 0) {
	
		cout << a;
	
		printDigits(a, --n);
	}
	
	else {
		printDigits(a, n);
	}
	
	return 1;
}

int main(int argc, char const *argv[])
{
	char s[100];
	int i, n1 = 0, n2 = 0, n3 = 0, flag = 0;

	cin >> s;

	for(i = 0; i < strlen(s); i++) {
		if(s[i] == '1') n1++;
		if(s[i] == '2') n2++;
		if(s[i] == '3') n3++;
 	}

 	flag = printer('1', n1, flag);
 	flag = printer('2', n2, flag);
 	flag = printer('3', n3, flag);

 	cout << endl;

 	return 0;
}