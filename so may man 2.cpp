#include<bits/stdc++.h>
using namespace std;
int sum(string s){
	int su=0;
	for(int i=0;i<s.length();i++){
		su+=s[i]-'0';
	}
	return su;
}
int tong(int n){
	int sum=0;
	while(n){
		sum+=n%10;
		n/=10;
	}
	return sum;
}
set<int> se;
void init(){
	se.insert(9);
	se.insert(18);
	se.insert(27);
	for(int i=1;i<=900;i++){
		if(se.find(tong(i))!=se.end()){
			se.insert(i);
		}
	}
}
int main(){
	int t;
	cin>>t;
	init();
	while(t--){
		string s;
		cin>>s;
		if(se.find(sum(s))!=se.end()){
			cout<<"1"<<endl;
		}
		else
		{
			cout<<"0"<<endl;
		}
	}
}

