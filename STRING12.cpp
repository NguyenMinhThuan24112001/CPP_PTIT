#include<bits/stdc++.h>
using namespace std;
inline int tonum(char c){
	return c-'0';
}
int solve(string s){
	set<char> se;
	for(char x:s){
		se.insert(x);
	}
	int cnt=se.size();
	int fre[256]={0};
	int dem=0;
	int start=0,ans=INT_MAX;
	for(int i=0;i<s.length();i++){
		fre[s[i]]++;
		if(fre[s[i]]==1)
		dem++;
		if(dem==cnt){
			while(fre[s[start]]>1){
				fre[s[start]]--;
				start++;
			}
			ans=min(ans,i-start+1);
		}
	}
	return ans;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		cout<<solve(s)<<endl;
	}
}
