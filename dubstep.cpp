#include <bits/stdc++.h>
#include <string>

using namespace std;

int main(int argc, char const *argv[])
{
	string s;
	int i, flag = 1;
	
	cin >> s;
	
	for(i = 0;i < s.length(); i++){
	    
	    if(s[i] == 'W' && s[i+1] == 'U' && s[i+2]=='B') {
	        i += 2;
	    
	        if(!flag) {
	            cout << " ";
	        }
	        continue;
	    }
	    else {
	        flag = 0;
	        cout << s[i];
	    }
	}

	cout << endl;

	return 0;
}