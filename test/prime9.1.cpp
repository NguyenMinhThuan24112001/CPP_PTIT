#include<bits/stdc++.h>
using namespace std;
void pt(long long n){
	long long res;
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0){
			int dem=0;;
			while(n%i==0){
				dem++;
				n/=i;
			}
			cout<<i<<" "<<dem<<" ";
		}
	}
	if(n>1){
		cout<<n<<" 1";
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		long long n;
		cin>>n;
		pt(n);
		cout<<endl;
	}
}
