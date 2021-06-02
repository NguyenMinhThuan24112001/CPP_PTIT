#include<bits/stdc++.h>
#include<string.h>
#include<ctype.h>
using namespace std;
int solve(string s){
	int n=s.length();
	if(n<2){
		return 0;
	}
	int sum;
	for(int i=0;i<s.length();i++){
		sum=(s[n-2]-'0')*10+s[n-1]-'0';
	}
	if(sum%86==0){
		return 1;
	}
	return 0;
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
