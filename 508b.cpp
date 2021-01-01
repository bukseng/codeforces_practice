
#include<bits/stdc++.h>
using namespace std;

#define ull unsigned long long
#define ll long long
const int MN = 2e5+5;
const ll MOD = 1e9+7;

//https://codeforces.com/problemset/problem/508/B


int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);

	string s;
	cin >> s;
	int n = s.size();
	
	int x = s[n-1]+48;
	int mi = -1;
	for(int i = 0; i < n-1; i++){
		int y = s[i] + 48;
		if(y % 2 == 0){
			int df = x - y;
			if(df > 0){
				mi = i;
				break;
			}else{
				mi = i;
			}
		}
	}
	
	if(mi == -1){
		s = "-1";
	}else{
		char tmp = s[mi];
		s[mi] = s[n-1];
		s[n-1] = tmp;		
	}
	cout << s << endl;
}
