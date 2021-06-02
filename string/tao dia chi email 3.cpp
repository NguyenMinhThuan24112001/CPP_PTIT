#include<bits/stdc++.h>
#include<string.h>
#include<ctype.h>
using namespace std;
void lower(string &s){
	for(int i=0;i<s.length();i++){
		s[i]=tolower(s[i]);
	}
}
int main(){
	string s;
	getline(cin,s);
	lower(s);
	vector<string> v;
	stringstream ss(s);
	string tam;
	while(ss>>tam){
		v.push_back(tam);
	}
	int n=v.size();
	cout<<v[n-1];
	for(int i=0;i<v.size()-1;i++){
		cout<<v[i][0];
	}
	cout<<"@ptit.edu.vn";
}

