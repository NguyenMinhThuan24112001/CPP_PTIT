#include<bits/stdc++.h>
using namespace std;
int solve(string s,int k){
	int ans=0;
	int n=s.length();
	int fre[256];
	for(int i=0;i<n;i++){
		memset(fre,0,sizeof(fre));
		int cnt=0;
		for(int j=i;j<n;j++){
			if(fre[s[j]]==0){
				cnt++;
			}
			fre[s[j]]++;
			if(cnt==k){
				ans++;
			}
			else if(cnt>k){
				break;
			}
		}
	}
	return ans;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		int k;
		cin>>s>>k;
		cout<<solve(s,k)<<endl;
	}
}
