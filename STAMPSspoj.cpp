#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int t, m, n, k=1;
	cin >> t;
	while(t--){
		int sum =0, c=0;
		 cin >> m >> n;
		 int a[n];
		 for(int i =0; i<n; i++)
			cin >> a[i];
		 sort(a, a+n, greater<int>());
		 for(int i=0; i<n; i++){
		 	sum += a[i];
		 	c++;
		 	if(sum >= m)
		 		break;
		 }
		 if(sum < m)
			cout << "Scenario #" << k<< ":\nimpossible" << "\n";
		 else
			cout << "Scenario #" << k<< ":\n" << c << "\n";
		 k++;
		 cout << "\n";
	 }
	return 0;
}