#include<bits/stdc++.h>
using namespace std;
bool solve2(int a[],int n,int x){
	unordered_map<int,int> m;
	for(int i=0;i<n;i++){
		m[a[i]]=1;
	}
	for(int i=0;i<n;i++){
		if(m[a[i]]&&m[a[i]+x])
		return true;
	}
	return false;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,x;
		cin>>n>>x;
		int a[n];
		for(int i=0;i<n;i++)
			cin>>a[i];
		if(solve2(a,n,x))
			cout<<1<<endl;
		else
			cout<<-1<<endl;
		
	}
}

