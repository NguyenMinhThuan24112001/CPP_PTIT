#include<bits/stdc++.h>
using namespace std;
void solve(string s){
	map<string,int> m;
	stringstream ss(s);
	string word,tam;
	while(ss>>word){
		m[word]++;
	}
	int res=INT_MIN;
	for(auto& p:m){
		if(p.second>res){
			res=p.second;
			tam=p.first;
		}
	}
	cout<<tam<<" "<<res<<endl;
}
int main(){
	int t;
	cin>>t;
	cin.ignore();
	while(t--){
		string s;
		getline(cin,s);
		solve(s);
	}
}
