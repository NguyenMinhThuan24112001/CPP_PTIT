#include<bits/stdc++.h>
using namespace std;
int tong(int n){
	int sum=0;
	int m;
	while(n>0){
		m=n%10;
		n/=10;
		sum+=m;
	}
	return sum;
}
bool smith(int n){
	int sum1=tong(n);
	int tam=n;
	int sum2=0;
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0){
			while(n%i==0){
				n/=i;
				sum2+=tong(i);
			}
		}
	}
	if(n>1){
		if(tam==n)
		return false;
		else
		sum2+=tong(n);
	}
	return sum1==sum2;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		if(smith(n)){
			cout<<"YES\n";
		}else{
			cout<<"NO\n";
		}
	}
}
