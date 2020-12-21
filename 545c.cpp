#include<bits/stdc++.h>
using namespace std;
 
#define ull unsigned long long
#define ll long long
const int MN = 1e5+5;
const int MOD = 1e9+7;
 
 //https://codeforces.com/problemset/problem/545/C
 
int n;
int x[MN];
int h[MN];
 
map<pair<int,int>, int> dp; 
 
int solve(int i, int last){
	if(i >= n) return 0;
	
	if(dp.count({i,last}) > 0){
		return dp[{i,last}];
	}
	
	if(x[i] - h[i] > last){
		return dp[{i, last}] = 1 + solve(i+1, x[i]);
	}else{
		if(i + 1 < n){
			if(x[i] + h[i] < x[i+1]){
				return dp[{i, last}] = max(1 + solve(i+1, x[i]+h[i]), solve(i+1, x[i]));
			}				
		}else{
			return dp[{i, last}] = 1 + solve(i+1, x[i]+h[i]);
		}
	}
	return dp[{i, last}] = solve(i+1, x[i]);
	
}
 
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> x[i];
		cin >> h[i];
	}
	
	cout << solve(0, -MOD) << endl;
 
}
