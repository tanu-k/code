#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	int n, k, i, a, ak, flag=0, count=0;

	cin >> n >> k;

	for(i = 1; i <= k; i++) {
		
		cin >> ak;

		if(ak == 0){
		flag =1;
		break;
		}

	    else count++;
		
	}
		if(flag==0) {
			
			for(i = k; i < n; i++) {
		
				cin >> a;
				if(a == 0 || a < ak) break;
		
				if(a >= ak) count++; 
		
	    	}
		}
	    
	    cout << count << endl;

	return 0;
}