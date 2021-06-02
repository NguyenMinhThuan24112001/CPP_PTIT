#include<bits/stdc++.h>
using namespace std;
bool check(string s){
	int n=s.length();
	int r[4]={1,2,4,3};
	int sum=0,cnt=0;
	for(int i=n-1;i>=0;i--){
		if(s[i]=='1')
			sum+=r[cnt];
		cnt++;
		sum%=5;
		cnt%=4;
	}
	if(sum%5==0)
		return true;
	return false;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		if(check(s)){
			cout<<"Yes"<<endl;
		}else{
			cout<<"No"<<endl;
		}
	}
}
