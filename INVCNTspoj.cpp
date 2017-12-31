#include<bits/stdc++.h>
using namespace std;
long long inv_count;
 
void merge(long long a[], long long left[], long long right[], long long lcount, long long rcount){
	long long i=0, j=0, k=0;
 
	while((i < lcount) && (j < rcount)){
		if(left[i] <= right[j])
			a[k++] = left[i++];
		else{
			a[k++] = right[j++];
			inv_count += (lcount-i); 
		}
	}
 
	while(i < lcount)
		a[k++] = left[i++];
	while(j < rcount)
		a[k++] = right[j++];
}
 
void divide(long long a[], long long n){
	if(n<2)
		return;
	long long m = n/2;
	long long left[m];
	long long right[n-m];
 
	for(long long i=0; i<m; i++)
		left[i] = a[i];
 
	for(long long i=m; i<n; i++)
		right[i-m] = a[i];
 
	divide(left, m);
	divide(right, n-m);
 
	merge(a, left, right, m, n-m);
}
 
int main(){
	long long t, n;
//	string c;
	cin >> t;
//	cout << t << " " << c;
	while(t--){
		cin >> n;
		long long a[n];
		for(long long i = 0 ; i < n ; i++)
			cin >> a[i];
		inv_count = 0;
		divide(a,n);
		cout << inv_count << "\n";
	}
	return 0;
}