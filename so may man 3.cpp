#include<bits/stdc++.h>
using namespace std;
bool check(string s){
	int n=s.length();
	int res;
	if(n<2){
		return false;
	}else{
		res=(s[n-2]-'0')*10+s[n-1]-'0';
	}
	return res==86;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		if(check(s)){
			cout<<"1"<<endl;
		}else{
			cout<<"0"<<endl;
		}
	}
}
