#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	int i,a,b,n,t;
    bool flag;
    cin >> t;

    while(t--) {
        flag = true;
        cin >> n;
        cin >> a;
        for(i = 1; i < n; i++) {
            cin >> b;
            if(b <= a) {
                flag = false;
            }
            a = b;
        }
        if(n % 2 == 0) cout << "YES" << endl;
        else {
            if(flag) cout << "NO" << endl;
            else cout << "YES" << endl;
        }
    }
	return 0;
}