#include<bits/stdc++.h>
#include<string.h>
#include<ctype.h>
using namespace std;
long long solve(string s){
	long long sum=0,tam=0;
	for(int i=0;i<s.length()+1;i++){
		if(s[i]>='0'&&s[i]<='9'){
			sum=sum*10+s[i]-'0';
		}else{
			tam+=sum;
			sum=0;
		}
	}
	return tam;
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
