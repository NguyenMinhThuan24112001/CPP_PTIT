#include<bits/stdc++.h>
#include<string.h>
#include<ctype.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		int a[256]={0};
		int res=0;
		int n=s.length();
		for(int i=0;i<s.length();i++){
			a[s[i]]++;
		}
		for(int i=0;i<s.length();i++){
			if(a[s[i]]>res){
				res=a[s[i]];
			}
		}
		if(2*res<=n&&n%2==0){
			cout<<1;
		}else if(res<n/2+1&&n%2==1){
			cout<<1;
		}else{
			cout<<0;
		}
		cout<<endl;
	}
}
