#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		string res=" ";
		int sum=0;
		for(int i=0;i<s.length();i++){
			if(s[i]>='0'&&s[i]<='9'){
				sum+=s[i]-'0';
			}else{
				res+=s[i];
			}
		}
		sort(res.begin(),res.end());
		cout<<res<<sum<<endl;
	}
}
