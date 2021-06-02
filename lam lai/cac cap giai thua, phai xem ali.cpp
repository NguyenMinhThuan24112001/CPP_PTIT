#include<bits/stdc++.h>
using namespace std;
void solve(long long n,long long a){
	string res=" ";
	while(a){
		int r=a%10;
		if(r==4){
			res+="322";
		}else if(r==6){
			res+="35";
		}else if(r==8){
			res+="2227";
		}else if(r==9){
			res+="3327";
		}else if(r!=1&&r!=0){
			res+=char(r+'0');
		}
		a/=10;
	}
	sort(res.begin(),res.end(),greater<char> ());
	cout<<res<<endl;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		long long n,a;
		cin>>n>>a;
		solve(n,a);
	}
}
