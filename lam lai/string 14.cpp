#include<bits/stdc++.h>
#include<string.h>
#include<ctype.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		cin.ignore();
		string s;
		getline(cin,s);
		int cnt=1;
		for(int i=0;i<s.size();i++){
			if(s[i]=='\t'||s[i]=='\n'||s[i]==' '){
				cnt++;
			}
		}
		cout<<cnt<<endl;
	}
}
