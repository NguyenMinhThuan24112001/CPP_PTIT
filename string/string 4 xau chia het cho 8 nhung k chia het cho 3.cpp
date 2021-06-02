#include<bits/stdc++.h>
#include<string.h>
#include<ctype.h>
using namespace std;
string s;
long long solve(int k){
	int dem=0;
	for(int i=0;i<s.length();i++){
		int sum=0;
		for(int j=i;j<s.length();j++){
			sum=sum*10+s[j]-'0';
			sum=sum%k;
			if(sum==0){
				dem++;
			}
		}
	}
	return dem;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		cin>>s;
		cout<<solve(8)-solve(24)<<endl;
	}
}
