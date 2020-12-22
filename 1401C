#include<bits/stdc++.h>
using namespace std;
 
#define ull unsigned long long
#define ll long long
const int MN = 1e5+5;
const int MOD = 1e9+7;

//https://codeforces.com/problemset/problem/1401/C
 
int a[MN];
int v[MN];
int na[MN];
bool b[MN];
 
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int mn = MOD;
		
		for(int i = 0; i < n; i++){
			cin >> a[i];
			b[i] = false;
			mn = min(mn, a[i]);
		}
		
		int j = 0;
		for(int i = 0; i < n; i++){
			if(a[i] % mn == 0){
				v[j] = a[i];
				b[i] = true;
				j++;
			}
		}
		sort(v, v+j);
		j = 0;
		for(int i = 0; i < n; i++){
			if(b[i]){
				na[i] = v[j++];
			}else{
				na[i] = a[i]; 
			}			
		}
		sort(a, a+n);
		bool ans = true;
		for(int i = 0; i < n; i++){
			if(na[i] != a[i]){
				ans = false;
				break;
			}
		}
		if(ans) cout << "YES" << endl;
		else cout << "NO" << endl;
		
		
	}
 
}
