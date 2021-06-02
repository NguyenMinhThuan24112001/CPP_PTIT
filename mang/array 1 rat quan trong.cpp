#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		long long a[n];
		set<long long> se;
		for(int i=0;i<n;i++){
			cin>>a[i];
			se.insert(a[i]);
		}
		for(int i=0;i<n;i++){
			if(se.find(i)!=se.end()){
				cout<<i<<" ";
			}else{
				cout<<-1<<" ";
			}
		}
		cout<<endl;
	}
}
