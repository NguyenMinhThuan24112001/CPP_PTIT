#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		int ans=0;
		int sum=0;
		int max=-99999999;
		for(int i=0;i<s.length()+1;i++){
			if(s[i]>='0'&&s[i]<='9'){
				sum=sum*10+s[i]-'0';
			}else{
				ans+=sum;
				sum=0;
			}
		}
		cout<<ans<<endl;
	}
}
