#include<bits/stdc++.h>
using namespace std;
long long solve(string s){
	int n=s.length();
	int sum1=0;
	int sum2=0;
	for(int i=0;i<n;i++){
		if(i%2==0){
			sum1+=(s[i]-'0');
		}else{
			sum2+=(s[i]-'0');
		}
	}
	if(abs(sum1-sum2)%11==0){
		return 1;
	}return 0;
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
