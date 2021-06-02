#include<bits/stdc++.h>
using namespace std;
bool solve(string x){
	long long res;
	long long n=x.length();
	if(x.length()<2){
		return false;
	}
	for(int i=0;i<n;i++){
		res=(x[n-2]-'0')*10+x[n-1]-'0';
	}
	return res==86;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		string x;
		cin>>x;
		cout<<solve(x)<<endl;
	}
}
