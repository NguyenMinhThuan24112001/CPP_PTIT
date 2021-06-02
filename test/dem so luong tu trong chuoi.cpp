#include<bits/stdc++.h>
using namespace std;
void solve(string s){
	stringstream ss(s);
	string tam;
	vector<string> v;
	while(ss>>tam){
		v.push_back(tam);
	}
	cout<<v.size()<<endl;
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
