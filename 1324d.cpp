
#include<bits/stdc++.h>
using namespace std;

#define ull unsigned long long
#define ll long long
const int MN = 2e5+5;
const ll MOD = 1e9+7;

//https://codeforces.com/problemset/problem/1324/D

int a[MN];


int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n; 
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	
	for(int i = 0; i < n; i++){
		int b;
		cin >> b;
		a[i] -= b;
	}
	
	sort(a, a+n);
	int i;
	for(i = 0; i < n; i++){
		if(a[i] > 0){
			break;
		}
	}
	ull ans = 0;
	ull acc = 0;
	int j = i - 1;
	int k = i;
	for(;i<n;i++){
		ull c = 0 + (ull)(i - k);
		while(j >= 0 && a[j] > -a[i]){
			j--;
			acc++;
		}
		ans += c + acc;
	}

	cout << ans << endl;
}
