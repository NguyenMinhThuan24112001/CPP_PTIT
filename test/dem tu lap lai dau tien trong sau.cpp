#include<bits/stdc++.h>
using namespace std;
string solve(string s){
	set<string> se;
	stringstream ss(s);
	string tam;
	while(ss>>tam){
		if(se.find(tam)!=se.end()){
			return tam;
			break;
		}
		se.insert(tam);
	}
	return "-1";
}
int main(){
	int t;
	cin>>t;
	cin.ignore();
	while(t--){
		string s;
		getline(cin,s);
		cout<<solve(s)<<endl;
	}
}
