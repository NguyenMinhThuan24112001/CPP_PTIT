#include<bits/stdc++.h>
using namespace std;
long long tong(long long n){
	long long sum=0;
	int m;
	while(n>0){
		m=n%10;
		n/=10;
		sum+=m;
	}
	return sum;
}
long long smith(long long n){
	long long sum1=tong(n);
	long long sum2=0;
	long long m=n;
	for(int i=2;i<=sqrt(n);i++){
		while(n%i==0){
			sum2+=tong(i);
			n/=i;
		}
	}
	if(n>1){
		if(m==n){
			return 0;
		}else{
			sum2+=tong(n);
		}
	}
	if(sum1==sum2){
		return 1;
	}
	return 0;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		long long n;
		cin>>n;
		if(smith(n)){
			cout<<"YES";
		}else{
			cout<<"NO";
		}
		cout<<endl;
	}
}
