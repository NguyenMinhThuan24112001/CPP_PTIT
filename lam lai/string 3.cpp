#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		int r[4]={1,2,4,3};
		int cnt=0;
		int sum=0;
		for(int i=s.length()-1;i>=0;i--){
			if(s[i]=='1'){
				sum+=r[cnt];
			}
			cnt++;
			sum%=5;
			cnt%=4;
		}
		if(sum%5==0){
			cout<<"Yes";
		}else{
			cout<<"No";
		}
		cout<<endl;
	}
}
