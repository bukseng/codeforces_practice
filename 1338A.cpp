#include<bits/stdc++.h>
using namespace std;
 
#define ull unsigned long long
#define ll long long
const int MN = 1e5+5;
const int MOD = 1e9+7;
 
 //https://codeforces.com/problemset/problem/1338/A
 
int a[MN];
 
int lmb(int x){
	int ret = 0;
	while(x){
		x >>= 1;
		ret++;
	}
	return ret;
}
 
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		for(int i = 0; i < n; i++){
			cin >> a[i];
		}
		
		int ans = 0;
		for(int i = 1; i < n; i++){
			if(a[i] < a[i-1]){
				int d = a[i-1] - a[i];
				ans = max(ans, lmb(d));
				a[i] = a[i-1];
			}
			
		}
		
		cout << ans << endl;
	}
 
}
