#include <bits/stdc++.h>
using namespace std;
int totient(int n){
	int ans = n;
	for(int p=2; p*p <= n; p++){
		if(n%p == 0){
			while(n%p == 0)
				n/=p;
			ans -= ans/p;
		}
	}
	if(n > 1)
		ans -= ans/n;
	return ans;
}
int main() {
	int t, n;
	cin >> t;
	while(t--){
		cin >> n;
		cout << totient(n) << "\n";
	}
	return 0;
}
