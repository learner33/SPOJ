#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int t;
	cin >> t;
	while(t--)
	{
		long long int n,r=5,sum=0,i=1;
		cin >> n;
		while(i>=1)
		{
			i=n/r;
			sum+=i;
			r=r*5;
		}
		cout << sum << "\n";
	}
	return 0;
}
