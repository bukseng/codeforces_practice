
#include<bits/stdc++.h>
using namespace std;

#define ull unsigned long long
#define ll long long
const int MN = 2e5+5;
const int MOD = 1e9+7;

//https://codeforces.com/problemset/problem/2/A


int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int n;
	cin >> n;
	string name[n];
	int score[n];
	map<string, int> ms;
	
	for(int i = 0; i < n; i++){
		cin >> name[i];
		cin >> score[i];
		if(ms.count(name[i]) > 0){
			ms[name[i]] += score[i];
		}else{
			ms[name[i]] = score[i];
		}
	}
	
	set<string> ws;
	int mxm = 0;
	for(auto p: ms){
		if(p.second > mxm){
			mxm = p.second;
			ws.clear();
			ws.insert(p.first);
		}else if(p.second == mxm){
			ws.insert(p.first);
		}
	}
		
	ms.clear();
	for(int i = 0; i < n; i++){
		if(ms.count(name[i]) > 0){
			ms[name[i]] += score[i];
		}else{
			ms[name[i]] = score[i];
		}
		if(ws.count(name[i]) > 0){
			if(ms[name[i]] >= mxm){
				cout << name[i] << endl;
				break;
			}
		}			
	}
	
	return 0;
}
