#include<bits/stdc++.h>
using namespace std;
int solve(string s){
	int n=s.length();
	vector<char> v;
	for(int i=0;i<n;i++){
		v.push_back(s[i]);
	}
	for(char x:v){
		if(v.find(x)!=v.end()){
			return 0;
		}
	}
	return 1;
}
int main(){
	int t;
	cin>>t;
	cin.ignore();
	while(t--){
		string s;
		cin>>s;
		if(solve(s)){
			cout<<"YES";
		}else{
			cout<<"NO";
		}
		cout<<endl;
	}
}
