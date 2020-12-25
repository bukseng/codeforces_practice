#include<bits/stdc++.h>
using namespace std;

#define ull unsigned long long
#define ll long long
const int MN = 2e5+5;
const int MOD = 1e9+7;

//https://codeforces.com/problemset/problem/431/C


int dp[105];

int solve(int n, int k){
	for(int i = 1; i <= n; i++){
		dp[i] = 0;
		for(int j = 1; j <= k && j <= i; j++){
			dp[i] = (dp[i] + dp[i-j]) % MOD;
		}	
	}

	return dp[n];
}


int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n, k, d;
	cin >> n >> k >> d;
	dp[0] = 1;
	cout << (solve(n, k) - solve(n, d-1) + MOD) % MOD << endl;
	
}
