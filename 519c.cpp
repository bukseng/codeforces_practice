#include<bits/stdc++.h>
using namespace std;
 
#define ull unsigned long long
#define ll long long
const int MN = 2e5+5;
const int MOD = 1e9+7;
 
//https://codeforces.com/problemset/problem/519/C
 
void solve(ull& a, ull& b, bool& stop, ull& ans){
	if(a > b){	
		a -= 2;
		b--;
		ans++;
	}else if(a == b){
		if(a >= 2){
			a -= 2;
			b--;
			ans++;
		}else{
			stop = true;
		}
	}
}
 
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	ull n, m;
	cin >> n >> m;
 
	bool stop = false;
	ull ans = 0;
	while(m && n && !stop){
		if(m >= n){
			solve(m, n, stop, ans);
		}else{
			solve(n, m, stop, ans);
		}
	}
	
	cout << ans << endl;
	
}
