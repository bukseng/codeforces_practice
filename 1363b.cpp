
#include<bits/stdc++.h>
using namespace std;

#define ull unsigned long long
#define ll long long
const int MN = 2e5+5;
const int MOD = 1e9+7;

//https://codeforces.com/problemset/problem/1363/B



int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		int n = s.size();
		vector<int> dp(n+1);
		dp[0] = 0;
		for(int i = 0; i < n; i++){
			dp[i+1] = dp[i]; 
			if(s[i] == '1') dp[i+1]++;
		}
		int ans = 1005;
		
		for(int i = 1; i <= n; i++){
			int lz = i - (dp[i] - dp[0]);
			int rz = (n-i) - (dp[n] - dp[i]);
			int lo = dp[i] - dp[0];
			int ro = dp[n] - dp[i];
			ans = min(ans, lz + ro);
			ans = min(ans, lo + rz);
		}
		
		cout << ans << endl;
	}
	
}
