#include<bits/stdc++.h>
using namespace std;
inline int tonum(char c){
	return c-'0';
}
string bigsum(string s1,string s2){
	if(s1.length()<s2.length())
	swap(s1,s2);
	int len1=s1.length();
	int len2=s2.length();
	int c=0;
	string res="";
	for(int i=0;i<len2;i++){
		int x=tonum(s1[len1-i-1])+tonum(s2[len2-i-1])+c;
		res=char(x%10+'0')+res;
		c=x/10;
	}
	for(int i=len2;i<len1;i++){
		int x=tonum(s1[len1-i-1])+c;
		res=char(x%10+'0')+res;
		c=x/10;
	}
	if(c){
		res="1"+res;
	}
	return res;
}
bool solve(string s,int start,int len1,int len2){
	string s1=s.substr(start,len1);
	string s2=s.substr(start+len1,len2);
	string s3=bigsum(s1,s2);
	int len3=s3.length();
	if(len3>s.length()-start-len1-len2){
		return false;
	}
	if(s3==s.substr(start+len1+len2,len3)){
		if(start+len1+len2+len3==s.length())
		return true;
		return solve(s,start+len1,len2,len3);
	}
	return false;
}
bool check(string s){
	int len=s.length();
	for(int i=1;i<len;i++){
		for(int j=1;j<len-i;j++){
			if(solve(s,0,i,j))
			return true;
		}
	}
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

