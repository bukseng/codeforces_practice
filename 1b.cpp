
#include<bits/stdc++.h>
using namespace std;

#define ull unsigned long long
#define ll long long
const int MN = 2e5+5;
const ll MOD = 1e9+7;

//https://codeforces.com/problemset/problem/1/B

char tbl_let[30];
map<char, int> tbl_num; 

void genTbl(){
	for(int i = 1; i <= 26; i++){
		tbl_let[i] = i + 64;
		tbl_num[i+64] = i;
	}
}


string toNum(string s){
	int m = s.size();
	int ttl = 0;
	int mul = 1;
	for(int i = m-1; i >= 0; i--){
		ttl += (tbl_num[s[i]]) * mul;
		mul *= 26;
	}
	return to_string(ttl);
}


string toLet(string s){
	string res = "";
	int num = stoi(s);
	while(num){
		int r = num%26;
		if(r == 0) r = 26;
		res = tbl_let[r] + res;
		num /= 26;
		if(r == 26) num--;
	}
	return res;
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	genTbl();
	int n;
	cin >> n;
	while(n--){
		string s;
		cin >> s;
		int m = s.size();
		bool type2 = false;
		if(s[0] == 'R' && isdigit(s[1])){
			for(int i = 2; i < m; i++){
				if(s[i] == 'C'){
					type2 = true;
					break;
				}
			}
		}
		
		string ans = "";
		string c = "", r = "";
		if(type2){
			int i = 1;
			while(i < m && isdigit(s[i])){
				r += s[i];
				i++;
			}
			i++;
			while(i < m && isdigit(s[i])){
				c+= s[i];
				i++;
			}
			ans = toLet(c);
			ans += r;
		}else{
			int i = 0;
			while(i < m && isalpha(s[i])){
				c += s[i];
				i++;
			}
			
			while(i < m && isdigit(s[i])){
				r += s[i];
				i++;
			}
			ans = "R" + r;
			ans += "C" + toNum(c);
		}
		cout << ans << endl;
		
	}
}
