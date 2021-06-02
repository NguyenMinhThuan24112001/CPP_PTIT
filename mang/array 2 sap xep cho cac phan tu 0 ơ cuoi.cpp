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
			long long a;
			cin>>a;
			if(a!=0){
				cout<<a<<" ";
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
