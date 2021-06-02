#include<bits/stdc++.h>
#include<string.h>
#include<ctype.h>
using namespace std;
int solve(string s){
	int sum=0,tam=0;
	int r[4]={1,2,4,3};
	for(int i=s.length()-1;i>=0;i--){
		if(s[i]=='1'){
			sum+=r[tam];
		}
		tam++;
		sum%=5;
		tam%=4;
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
