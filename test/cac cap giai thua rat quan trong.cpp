#include<bits/stdc++.h>
using namespace std;
void solve(long long n,long long a){
	string s=" ";
	while(a){
		int m=a%10;
		if(m==4){
			s+="322";
		}else if(m==6){
			s+="35";
		}else if(m==8){
			s+="2227";
		}else if(m==9){
			s+="3327";
		}else if(m!=0&&m!=1){
			s+=char(m+'0');
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
		long long n,a;
		cin>>n>>a;
		solve(n,a);
	}
}
