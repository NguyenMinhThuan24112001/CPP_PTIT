#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,m;
		cin>>n>>m;
		vector<long long> v1,v2;
		for(int i=0;i<n;i++){
			int a1;
			cin>>a1;
			v1.push_back(a1);
		}
		for(int i=0;i<m;i++){
			int a2;
			cin>>a2;
			v2.push_back(a2);
		}
		cout<<(*max_element(v1.begin(),v1.end()))*(*min_element(v2.begin(),v2.end()))<<endl;
	}
}
