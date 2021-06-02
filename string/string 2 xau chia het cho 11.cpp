#include<bits/stdc++.h>
#include<string.h>
#include<ctype.h>
using namespace std;
int solve(string s){
	int sum1=0,sum2=0;
	for(int i=0;i<s.length();i++){
		if(i%2==0){
			sum1+=s[i]-'0';
		}else{
			sum2+=s[i]-'0';
		}
	}
	if(abs(sum1-sum2)%11==0){
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
		if(solve(s)){
			cout<<1;
		}else{
			cout<<0;
		}
		cout<<endl;
	}
}
