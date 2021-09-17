#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
    int n, p, v, t, i, k=0;
    
    cin >> n;

    for(i = 1; i<=n; i++) {
        cin >> p >> v >> t;
        if(p+v+t >= 2) k++;
    }
    cout << k << endl;

    return 0;
}