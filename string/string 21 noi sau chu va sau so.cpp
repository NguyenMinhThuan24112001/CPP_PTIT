#include<bits/stdc++.h>
#include<string.h>
#include<ctype.h>
using namespace std;
void solve(string s){
	int sum=0;
	string res="";
	for(int i=0;i<s.length();i++){
		if(s[i]>='0'&&s[i]<='9'){
			sum+=s[i]-'0';
		}else{
			res+=s[i];
		}
	}
	sort(res.begin(),res.end());
	cout<<res<<sum<<endl;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		solve(s);
	}
}
