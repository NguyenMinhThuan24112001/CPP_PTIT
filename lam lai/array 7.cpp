#include<bits/stdc++.h>
using namespace std;
bool tonum(string a,string b){
	string s1=a+b;
	string s2=b+a;
	if(s1>s2){
		return true;
	}
	return false;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		string a[n];
		vector<string> v;
		for(int i=0;i<n;i++){
			cin>>a[i];
			v.push_back(a[i]);
		}
		sort(v.begin(),v.end(),tonum);
		for(string x:v){
			cout<<x;
		}
		cout<<endl;
	}
}
