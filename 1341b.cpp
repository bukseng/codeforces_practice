#include<bits/stdc++.h>
using namespace std;
 
#define ull unsigned long long
#define ll long long
const int MN = 2e5+5;
const int MOD = 1e9+7;
 
//https://codeforces.com/problemset/problem/1341/B
 
int a[MN];
int dp[MN];
int p[MN];
 
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int t;
	cin >> t;
	while(t--){
		int n, k;
		cin >> n >> k;
		for(int i = 0; i < n; i++){
			cin >> a[i];
			p[i] = 0;
		}
		
		for(int i = 1; i < n-1; i++){
			if(a[i] > a[i-1] && a[i] > a[i+1]){
				p[i] = 1;
			}
		}
		
		for(int i = 1; i <= n; i++){
			dp[i] = p[i-1] + dp[i-1];
		}
		
		int mx = 0, l = 0;
		for(int i = 1; i+k-1 <= n; i++){
			int tmp = dp[i+k-1] - dp[i-1]+ 1;
			if(p[i-1]) tmp--;
			if(p[i+k-2]) tmp--;
			if(tmp > mx){
				mx = tmp;
				l = i-1;
			}
			
		}
		cout << mx << " " <<  l+1 << endl;
	}
 
}
