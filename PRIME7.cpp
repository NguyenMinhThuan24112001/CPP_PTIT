#include<bits/stdc++.h>
using namespace std;
bool pt(int n){
	int dem=0;
	for(int i=2;i<=sqrt(n);i++){
		int cnt=0;
		while(n%i==0){
			cnt++;
			n/=i;
		}
		if(cnt>=2)
			return false;
		else if(cnt==1)
			dem++;
	}
	if(n>1)
		dem++;
		return dem==3;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		cout<<pt(n)<<endl;
	}
}
