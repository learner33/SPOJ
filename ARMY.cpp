#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int t, g, m;
	cin >> t;
	while(t--){
		cin >> g >> m;
		int a[g];
		int b[m];
		for(int i =0; i < g; i++)
			 cin >> a[i];
		for(int i =0; i < m; i++)
			 cin >> b[i];
		int c = *max_element(a, a+g);
		int d = *max_element(b, b+m);
 
		if(c >= d)
			cout << "Godzilla\n";
		else
			cout << "MechaGodzilla\n";
	}
	return 0;
}
