#include<bits/stdc++.h>
using namespace std;
int solve(int n,int p){
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
		int n,p;
		cin>>n>>p;
		cout<<solve(n,p)<<endl;
	}
}
