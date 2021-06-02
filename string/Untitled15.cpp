#include<bits/stdc++.h>
using namespace std;
long long tong(long long n){
	long long m;
	long long sum=0;
	while(n>0){
		m=n%10;
		sum+=m;
		n/=10;
	}
	return sum;
}
int main(){
	long long dem=0;
	long long n;
	cin>>n;
	for(long long i=1000000000;i<=n;i++){
		if(tong(i)==18){
			dem++;
		}
	}
	cout<<dem;
}
