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
		int dem=1;
		for(int i=0;i<s.length();i++){
			if(s[i]==' '||s[i]=='\n'||s[i]=='\t'){
				dem++;
			}
		}
		cout<<dem<<endl;
	}
}
