#include <bits/stdc++.h>
using namespace std;
 
int main() {
	long long t, g, m;
	cin >> t;
	while(t--){
		cin >> g >> m;
		long long a[g];
		long long b[m];
		for(long long i =0; i < g; i++)
			 cin >> a[i];
		for(long long i =0; i < m; i++)
			 cin >> b[i];
		sort(a, a+g);
		sort(b, b+m);
		long long i =0, j=0;
		while((i < g) && (j < m)){
			if(b[j] <= a[i])
				j++;
			else
				i++;
		}
		if(j >= m)
			cout << "Godzilla\n";
		else
			cout << "MechaGodzilla\n";
	}
	return 0;
}