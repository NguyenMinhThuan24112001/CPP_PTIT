#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		int sum=0;
		int max=-9999999;
		for(int i=0;i<s.length();i++){
			if(s[i]>='0'&&s[i]<='9'){
				sum=sum*10+s[i]-'0';
				if(sum>max){
					max=sum;
				}
			}else{
				sum=0;
			}
		}
		cout<<max<<endl;
	}
}
