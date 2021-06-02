#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int dem=0;
		for(int i=0;i<n;i++){
			long long x;
			cin>>x;
			if(x!=0){
			cout<<x<<" ";
		}else{
			dem++;
		}
		}
		for(int i=0;i<dem;i++){
			cout<<"0 ";
		}
		cout<<endl;
	}
}
