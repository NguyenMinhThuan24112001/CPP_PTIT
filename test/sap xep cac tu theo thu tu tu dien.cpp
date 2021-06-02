#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
void solve(string s){
	stringstream ss(s);
	string tam;
	vector<string> v;
	while(ss>>tam){
		v.push_back(tam);
	}
	sort(v.begin(),v.end());
	for(string x:v){
		cout<<x<<" ";
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
