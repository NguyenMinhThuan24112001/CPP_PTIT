#include<bits/stdc++.h>
using namespace std;
long long tonum(string a){
	long long ans=0;
	for(int i=0;i<a.length();i++){
		ans=ans*10+a[i]-'0';
	}
	return ans;
}
void sum(string a,string b){
	string a1=a,b1=b;
	for(int i=0;i<a.length();i++){
		if(a[i]=='6')
		a[i]='5';
	}
	for(int i=0;i<b.length();i++){
		if(b[i]=='6')
		b[i]='5';
	}
	cout<<tonum(a)+tonum(b)<<" ";
	for(int i=0;i<a1.length();i++){
		if(a1[i]=='5')
		a1[i]='6';
	}for(int i=0;i<b1.length();i++){
		if(b1[i]=='5')
		b1[i]='6';
	}
	cout<<tonum(a1)+tonum(b1)<<endl;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		string a,b;
		cin>>a>>b;
		sum(a,b);
	}
}
