#include<bits/stdc++.h>
#include<string.h>
#include<ctype.h>
using namespace std;
void solve(string s,int k){
	long long dem=0;
	long long a[256];
	for(int i=0;i<s.length();i++){
		memset(a,0,sizeof(a));
		long long cnt=0;
		for(int j=i;j<s.length();j++){
			if(a[s[j]]==0){
				cnt++;
			}
			a[s[j]]++;
			if(cnt==k){
				dem++;
			}else if(cnt>k){
				break;
			}
		}
	}
	cout<<dem<<endl;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		int k;
		cin>>s>>k;
		solve(s,k);
	}
}
