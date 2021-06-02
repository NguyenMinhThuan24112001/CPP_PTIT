#include<bits/stdc++.h>
using namespace std;
long long solve(long long n,long long p){
	int dem=0;
	for(int i=p;i<=n;i+=p){
		int tam=i;
		while(tam%p==0){
			dem++;
			tam/=p;
		}
	}
	return dem;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		long long n,p;
		cin>>n>>p;
		cout<<solve(n,p)<<endl;
	}
}
