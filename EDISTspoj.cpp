#include <bits/stdc++.h>
using namespace std;
 
int edit_dist(string s1, string s2, int a, int b){
	int dp[a+1][b+1];
	for(int i = 0; i <=a; i++){
		for(int j = 0; j <= b; j++){
 
			if(i == 0)
				dp[i][j] = j;
			else if(j == 0)
				dp[i][j] = i;
			else if(s1[i-1] == s2[j-1])
				dp[i][j] = dp[i-1][j-1];
			else
				dp[i][j] = 1 + min(dp[i-1][j], min(dp[i][j-1], dp[i-1][j-1]) );
		}
	}
	return dp[a][b];
}
 
int main() {
	int t;
	cin >> t;
	while(t--){
		string s1,s2;
		cin >> s1 >> s2;
		cout << edit_dist(s1, s2, s1.length(), s2.length()) << "\n";
	}
	return 0;
}