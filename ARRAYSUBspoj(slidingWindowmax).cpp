#include <bits/stdc++.h>
using namespace std;

void max_elem_subarray(int *a, int n, int k){
    deque <int> d;
    for(int i = 0; i < k; i++){
        while( (!d.empty()) && (a[i] >= a[d.back()]) )
            d.pop_back();
        d.push_back(i);
    }
    for(int i = k; i < n; i++){
        cout << a[d.front()] << " ";
        
        while((!d.empty()) && (d.front() <= i-k))
            d.pop_front();
        while( (!d.empty()) && (a[i] >= a[d.back()]) )
            d.pop_back();
        d.push_back(i);
    }
    cout << a[d.front()] << "\n";
}

int main() {
	int n, k;
	
	
	    cin >> n;
	    
	    int a[n];
	    for(int i =0; i < n; i++)
		    cin >> a[i];
	    cin >> k;
	    max_elem_subarray(a, n, k);
	
	return 0;
}