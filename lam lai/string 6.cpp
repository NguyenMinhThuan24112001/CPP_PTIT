#include<bits/stdc++.h>
using namespace std;
long long solve1(string s){
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
	cout<<solve1(a)+solve1(b)<<" "<<solve1(a1)+solve1(b1)<<endl;
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
