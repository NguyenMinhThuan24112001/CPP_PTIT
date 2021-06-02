#include<bits/stdc++.h>
using namespace std;
void solve(string s){
	int ans=0,sum=0;
	for(int i=0;i<s.size()+1;i++){
		if(s[i]>='0'&&s[i]<='9'){
			sum=sum*10+s[i]-'0';
		}else{
			ans+=sum;
			sum=0;
		}
	}
	cout<<ans<<endl;
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
