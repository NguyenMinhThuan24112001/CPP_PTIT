#include<bits/stdc++.h>
using namespace std;
bool check(string s){
	int s1=0,s2=0;
	for(int i=0;i<s.length();i++){
		if(i%2==0){
			s1+=s[i]-'0';
		}else{
			s2+=s[i]-'0';
		}
	}
	if((s1-s2)%11==0){
		return true;
	}return false;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		if(check(s)){
			cout<<"1"<<endl;
		}else{
			cout<<"0"<<endl;
		}
	}
}
