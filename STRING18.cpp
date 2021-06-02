#include<bits/stdc++.h>
using namespace std;
string s;
int solve(){
	int n=s.length();
	if(n<3)
		return 0;
	int i1=0,i2=1,i3=2,ans=0;
	while(i3<n){
		if(s[i1]=='1'&&s[i2]=='0'&&s[i3]=='0'){
			ans++;
			if(i1>=1){
				if(s[i1-1]=='1'){
					i1=i1-1;
					i2=i3+1;
					i3=i2+1;
				}
				else
				{
					i1=i3+1;
					i2=i1+1;
					i3=i2+1;
				}
			}
		}
		else{
			i1++;
			i2++;
			i3++;
		}
	}
	return ans*3;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		cin>>s;
		cout<<solve()<<endl;
	}
}
