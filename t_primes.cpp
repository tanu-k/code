#include <iostream>
using namespace std;
#include <cmath>

bool sieve[1000002];

void sieve1()
{
	int i,k;
	sieve[0]=true;
	sieve[1]=true;
	for(i=2;i<1005;++i)
	{
		if(sieve[i]==false)
		{
			for(k=i*i;k<1000002;k=k+i)
			{
				sieve[k]=true;
			}
		}
	}
}
int main()
{
	long long n,i,x;
	
	cin >> n;
	
	sieve1();
	
	for(i=0;i<n;++i)
	{
		cin >> x;
	
		if(ceil(sqrt(x))==floor(sqrt(x)) && sieve[((int)sqrt(x))]==false) cout<<"YES"<<endl;
		else cout << "NO"<<endl;
	}
	
	return 0;
}