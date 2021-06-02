#include<bits/stdc++.h>
#include<string.h>
#include<ctype.h>
using namespace std;
long long tonum(string s){
	long long sum=0;
	for(int i=0;i<s.length();i++){
		sum=sum*10+s[i]-'0';
	}
	return sum;
}
void solve(string a,string b){
	string a1=a;
	string b1=b;
	for(int i=0;i<a.length();i++){
		if(a[i]=='6'){
			a[i]='5';
		}
	}
	for(int i=0;i<b.length();i++){
		if(b[i]=='6'){
			b[i]='5';
		}
	}
	for(int i=0;i<a1.length();i++){
		if(a1[i]=='5'){
			a1[i]='6';
		}
	}
	for(int i=0;i<b1.length();i++){
		if(b1[i]=='5'){
			b1[i]='6';
		}
	}
	cout<<tonum(a)+tonum(b)<<" "<<tonum(a1)+tonum(b1);
	cout<<endl;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		string a,b;
		cin>>a>>b;
		solve(a,b);
	}
}
