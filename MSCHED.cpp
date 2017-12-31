#include <bits/stdc++.h>
using namespace std;
int n;
int result[10000];
bool slot[10000];
struct cow{
	int id;
	int dead;
	int profit;
};
struct cow a[10000];
bool comparison(cow a, cow b){
	return (a.profit > b.profit);
}
int job_sequencing(){
	sort(a, a+n, comparison);
	
	for(int i =0; i<n; i++)
		slot[i] = false;
	
	for(int i =0; i< n; i++){
		int j = min( n, a[i].dead);    //since some might have deadlines more than the no of cows
									   //(each task takes one second = no. of cows).
		while(j>0){
			if(slot[j-1] == false){
				slot[j-1] = true;
				result[j-1] = i;
				break;
			}
			j--;
		}
	}
	int sum =0;
	cout << "the order of sequencing :\n";
	for(int i = 0; i<n; i++){
		if(slot[i]){
		cout << a[result[i]].id<< " ";
		sum += a[result[i]].profit;
		}
	}
	
	return sum;
}
int main() {
	
		cin >> n;
		for(int i =0; i<n; i++){
			a[i].id = i+1;
			cin >> a[i].profit >> a[i].dead;
		}
		cout << "\nprofit:\n" <<job_sequencing();
	return 0;
}
