#include<bits/stdc++.h>
#include<string.h>
#include<ctype.h>
using namespace std;
long long solve(string s){
	int n=s.length();
	int sum=0;
	int cnt=0;
	int r[4]={1,2,4,3};
	for(int i=n-1;i>=0;i--){
		if(s[i]=='1'){
			sum+=r[cnt];
		}
		cnt++;
		sum%=5;
		cnt%=4;
	}
	if(sum%5==0){
		return 1;
	}
	return 0;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		if(solve(s)){
			cout<<"Yes";
		}else{
			cout<<"No";
		}
		cout<<endl;
	}
}

