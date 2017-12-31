#include <bits/stdc++.h>
using namespace std;
 
int seive(long i){
 
	if(i == 1)
		return 0;
	if(i == 2)
		return 1;
	if(i % 2 == 0)
		return 0;
	for(long k = 3; k*k <= i; k+=2){
		if(i%k == 0)			
			return 0;
		}
	return 1;
}
 
int main() {
	int t;
	cin >> t;
 
	while(t--){
		long m, n;
		cin >> m >> n;
		for(int i = m; i <= n; i++){
			if(seive(i) == 1)
				cout << i << "\n";
		}
		cout << "\n";
	}
	return 0;
}
