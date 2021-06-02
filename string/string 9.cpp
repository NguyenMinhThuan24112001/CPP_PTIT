#include<bits/stdc++.h>
#include<string.h>
#include<ctype.h>
using namespace std;
void solve(string s){
	int sum=0;
	int res=0;
	for(int i=0;i<s.length()+1;i++){
		if(s[i]>='0'&&s[i]<='9'){
			sum=sum*10+s[i]-'0';
			if(sum>res){
				res=sum;
			}
		}else{
			sum=0;
		}
	}
	cout<<res<<endl;
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
