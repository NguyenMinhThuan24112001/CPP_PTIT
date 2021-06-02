#include<bits/stdc++.h>
using namespace std;
int ngto(int n){
	int i;
	if(n==0||n==1){
		return 0;
	}else{
		for(int i=2;i<=sqrt(n);i++){
			if(n%i==0){
				return 0;
			}
		}
		return 1;
	}
}
int phi(int n){
	int res=n;
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0){
			while(n%i==0)
				n/=i;
				res-=res/i;
		}
	}
	if(n>1)
		res-=res/n;
	return res;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		if(ngto(phi(n))){
			cout<<"1";
		}else{
			cout<<"0";
		}
		cout<<endl;
	}
}
