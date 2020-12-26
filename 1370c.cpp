
#include<bits/stdc++.h>
using namespace std;

#define ull unsigned long long
#define ll long long
const int MN = 4e4;
const int MOD = 1e9+7;

//https://codeforces.com/problemset/problem/1370/C


set<int> divs;
void gDiv(int n){
	for(int i = 2; i*i <= n; i++){
		if(n % i == 0){
			divs.insert(n/i);
			divs.insert(i);
		}
	}
}

bool isPrime(int n){
	bool res = true;
	for(int i = 2; i*i <= n; i++){
		if(n % i == 0) return false;
	}
	return res;
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		bool awin;
		bool hod = false;
		gDiv(n);
		for (int x: divs){
			if(x % 2) hod = true;
		}
		if(n == 1) awin = false;
		else if(n == 2 || n % 2) awin = true;
		else if(n % 2 == 0 && !hod) awin = false;
		else if(hod && n % 4 == 0) awin = true;
		else {
			if(isPrime(n/2)){
				awin = false;
			}else{
				awin = true;
			}
		}
			
		if(awin) cout << "Ashishgup" << endl;
		else cout << "FastestFinger" << endl;
		
		divs.clear();
	}
	
}
