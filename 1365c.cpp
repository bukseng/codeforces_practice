
#include<bits/stdc++.h>
using namespace std;

#define ull unsigned long long
#define ll long long
const int MN = 2e5+5;
const int MOD = 1e9+7;

//https://codeforces.com/problemset/problem/1365/C


int dp[MN];
int dp2[MN];
int dif[MN];

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	for(int i = 0; i < n; i++){
		int a;
		cin >> a;
		dp[a] = i;
		dp2[a] = i+n;
	}
	
	int ans = 0;
	for(int i = 0; i < n; i++){
		int b;
		cin >> b;
		int x;
		if(dp[b] - i < 0){
			x = dp2[b] - i;
		}else{
			x = dp[b] - i;
		}			
		dif[x]++;
		ans = max(ans, dif[x]);
	}
	
	cout << ans << endl;
	
}
