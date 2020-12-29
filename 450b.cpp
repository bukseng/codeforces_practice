
#include<bits/stdc++.h>
using namespace std;

#define ull unsigned long long
#define ll long long
const int MN = 2e5+5;
const ll MOD = 1e9+7;

//https://codeforces.com/problemset/problem/450/B


int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	ll x, y;
	int n;
	cin >> x >> y >> n;
	set<pair<ll,ll> > sp;
	sp.insert({x,y});
	vector<ll> v(3, 0);
	v[1] = x;
	v[2] = y;
	ll ans ;
	if(n == 1 || n == 2) ans = (v[n]+MOD)%MOD;
	else{
		ll a = x, b = y, c;
		while(1){
			c = b-a;
			if(sp.count({b,c}) > 0){
				break;
			}else{
				v.push_back(c);
				sp.insert({b,c});
				a = b;
				b = c;
			}
		}
		
		int m = v.size() - 2;
		if(n % m == 0){
			ans = (v[m]+MOD)%MOD;
		}else{
			ans = (v[n%m]+MOD)%MOD;
		}
		if(ans < 0){
			ans = (ans+MOD) % MOD;
		}
	}
	cout << ans << endl;
}
