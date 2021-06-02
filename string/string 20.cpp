#include<bits/stdc++.h>
#include<string.h>
#include<ctype.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	cin.ignore();
	while(t--){
		string s;
		getline(cin,s);
		stringstream ss(s);
		vector<string> v;
		string tam;
		while(ss>>tam){
			v.push_back(tam);
		}
		for(int i=v.size()-1;i>=0;i--){
			cout<<v[i]<<" ";
		}
		cout<<endl;
	}
}
