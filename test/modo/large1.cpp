#include<bits/stdc++.h>
using namespace std;
string sub(string a,string b){
	string res="";
	while(b.size()<a.size())
	b.insert(0,"0");
	if(a<b){
		swap(a,b);
	}
	int bo=0;
	for(int i=a.size()-1;i>=0;i--){
		int tam=a[i]-b[i]-bo;
		if(tam<0){
			tam+=10;
			bo=1;
		}else{
			bo=0;
		}
		res=(char)(tam%10+48)+res;
	}
	while(res.length()>1&&res[0]=='0'&&res[1]=='0'){
		res.erase(0,1);
	}
	return res;	
}
int main(){
	int t;
	cin>>t;
	while(t--){
		string a,b;
		cin>>a>>b;
		if(a.size()<b.size()) swap(a,b);
		cout<<sub(a,b)<<endl;
	}
}
