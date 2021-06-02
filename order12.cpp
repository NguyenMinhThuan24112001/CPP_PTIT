#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<int> v;
		for(int i=0;i<n;i++){
			int x;
			cin>>x;
			if(x>0){
				v.push_back(x);
			}
		}
		bool ok=true;
		sort(v.begin(),v.end());
		for(int i=0;i<v.size();i++){
			if(v[i]-1!=i){
				cout<<i+1<<" ";
				ok=false;
				break;
			}
		}
		if(ok){
			cout<<v.size()+1;
		}
		cout<<endl;
	}
}
