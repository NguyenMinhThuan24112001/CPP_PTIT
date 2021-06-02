#include<bits/stdc++.h>
#include<string.h>
#include<ctype.h>
using namespace std;
void solve(string s){
	stringstream ss(s);
	string tam;
	vector<string> v;
	while(ss>>tam){
		v.push_back(tam);
	}
	int n=v.size();
	for(int i=n-1;i>=0;i--){
		cout<<v[i]<<" ";
	}
	cout<<endl;
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
