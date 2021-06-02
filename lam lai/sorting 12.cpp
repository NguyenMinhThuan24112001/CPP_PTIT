#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,m;
		cin>>n>>m;
		int a[n],b[m];
		vector<long long> v1,v2;
		for(int i=0;i<n;i++){
			cin>>a[i];
			v1.push_back(a[i]);
		}
		for(int i=0;i<m;i++){
			cin>>b[i];
			v2.push_back(b[i]);
		}
		cout<<(*(max_element(v1.begin(),v1.end())))*(*(min_element(v2.begin(),v2.end())))<<endl;
	}
}
