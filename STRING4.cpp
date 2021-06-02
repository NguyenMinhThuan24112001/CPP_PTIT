#include<bits/stdc++.h>
using namespace std;
inline int tonum(char c){
	return c-'0';
}
int solve(string s){
	int n=s.length();
	int rem[n+1],c[n+1][3];
	memset(rem,0,sizeof(rem));
	memset(c,0,sizeof(c));
	c[0][0]=1;
	int sum=0;
	for(int i=1;i<=n;i++){
		int x=tonum(s[i-1]);
		sum+=x;
		sum%=3;
		rem[i]=sum;
		c[i][0]=c[i-1][0];
		c[i][1]=c[i-1][1];
		c[i][2]=c[i-1][2];
		c[i][rem[i]]++;
	}
	int res=0;
	for(int i=1;i<=n;i++){
		int x=tonum(s[i-1]);
		if(x==8){
			res++;
		}
		if(i>=2){
			int y=tonum(s[i-2])*10+tonum(s[i-1]);
			if(y%8==0&&y%3!=0){
				res++;
			}
		}
		if(i>=3){
			int z=tonum(s[i-3])*100+tonum(s[i-2])*10+tonum(s[i-1]);
			if(z%8==0){
				res+=i-2;
				res-=c[i-3][rem[i]];
			}
		}
	}
	return res;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		cout<<solve(s)<<endl;
	}
}
