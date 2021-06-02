#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
void solve(){
	long long n,a;
	cin>>n>>a;
	string s="";
	while(a){
		int r=a%10;
		if(r==4){
			s+="223";
		}
		else if(r==6){
			s+="35";
		}
		else if(r==8){
			s+="2227";
		}
		else if(r==9){
			s+="3327";
		}
		else if(r!=1&&r!=0){
			s+=char(r+'0');
		}
		a/=10;
	}
	sort(s.begin(),s.end(),greater<char>());
	cout<<s<<endl;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
	}
}
