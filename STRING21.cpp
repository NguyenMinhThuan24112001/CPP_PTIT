#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
void solve(string s){
	int sum=0;
	string res="";
	for(int i=0;i<s.length();i++){
		if(isdigit(s[i])){
			sum+=s[i]-'0';
		}
		else
		{
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
