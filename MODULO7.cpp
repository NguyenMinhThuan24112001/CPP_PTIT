#include<bits/stdc++.h>
using namespace std;
vector<int> divisor(int n){
	vector<int> res;
	for(int i=1;i<=sqrt(n);i++){
		if(n%i==0){
			res.push_back(i);
			if(i!=n/i)
			res.push_back(n/i);
		}
	}
	return res;
}
int n,a[100000];
void solve(){
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int m=*min_element(a,a+n);
	int M=*max_element(a,a+n);
	int x=M-m;
	vector<int> d=divisor(x);
	int dem=0;
	for(int i=0;i<d.size();i++){
		int r=a[0]%d[i];
		bool flag=true;
		for(int j=1;j<n;j++){
			if(a[j]%d[i]!=r){
				flag=false;
				break;
			}
		}
		if(flag){
			dem++;
		}
	}
	cout<<dem<<endl;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
	}
}
