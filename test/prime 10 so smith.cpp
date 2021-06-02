#include<bits/stdc++.h>
using namespace std;
int tong(int n){
	int sum=0;
	while(n>0){
	int	m=n%10;
		sum+=m;
		n/=10;
	}
	return sum;
}
int pt(int n){
	int res=n;
	int sum=0;
	int sum1=tong(n);
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0){
		while(n%i==0){
			sum+=tong(i);
			n/=i;
		}
		}
	}
	if(n>1){
		if(res==n){
			return 0;
		}else{
			sum+=tong(n);
		}
	}
	if(sum1==sum){
		return 1;
	}
	return 0;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		if(pt(n)){
			cout<<"YES";
		}else{
			cout<<"NO";
		}
		cout<<endl;
	}
}
