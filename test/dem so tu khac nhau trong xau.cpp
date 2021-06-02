#include<bits/stdc++.h>
using namespace std;
void solve(string s){
	set<string> se;
	stringstream ss(s);
	string tam;
	while(ss>>tam){
		se.insert(tam);
	}
	cout<<(int)se.size()<<endl;
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
