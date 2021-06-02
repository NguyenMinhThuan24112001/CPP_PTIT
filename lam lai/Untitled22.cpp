#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		int ans=-9999999;
		int sum=0;
		for(int i=0;i<s.size()+1;i++){
			if(s[i]>='0'&&s[i]<='9'){
				sum=sum*10+s[i]-'0';
				if(sum>ans){
					ans=sum;
				}
			}else{
				sum=0;
			}
		}
		cout<<ans<<endl;
	}
}
