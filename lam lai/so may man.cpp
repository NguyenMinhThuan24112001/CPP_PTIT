#include<bits/stdc++.h>
using namespace std;
long long tong1(string s){
	long long res=0;
	for(int i=0;i<s.length();i++){
		res=res+s[i]-'0';
	}
	return res;
}
long long tong2(long long n){
	int sum=0;
	while(n!=0){
		int m=n%10;
		sum+=m;
		n/=10;
	}
	return sum;
}
set<int> se;
void solve(){
	se.insert(9);
	se.insert(18);
	se.insert(27);
	for(int i=1;i<=900;i++){
		if(se.find(tong2(i))!=se.end()){
			se.insert(i);
		}
	}
}
int main(){
	solve();
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		if(se.find(tong1(s))!=se.end()){
			cout<<"1";
		}else{
			cout<<"0";
		}
		cout<<endl;
	}
}
