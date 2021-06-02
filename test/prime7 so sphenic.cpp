#include<bits/stdc++.h>
using namespace std;
long long pt(long long n){
	int dem=0;
	for(int i=2;i<=sqrt(n);i++){
		int dem1=0;
		while(n%i==0){
			dem1++;
			n/=i;
		}if(dem1>=2){
			return 0;
		}else if(dem1==1){
			dem++;
		}
	}
	if(n>1){
		dem++;
	}
	if(dem==3){
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
		cout<<pt(n);
		cout<<endl;
	}
}
