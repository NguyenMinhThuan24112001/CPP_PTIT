#include<bits/stdc++.h>
using namespace std;
int n,a[100][100];
void inp(){
	cin>>n;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>a[i][j];
		}
	}
}
void solve(){
	int col[n],row[n];
	memset(row,0,sizeof(row));
	memset(col,0,sizeof(col));
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			row[i]+=a[i][j];
			col[j]+=a[i][j];
		}
	}
	int max_sum=0;
	for(int i=0;i<n;i++){
		max_sum=max(max_sum,max(col[i],row[i]));
	}
	int ans=0;
	int i=0,j=0;
	while(i<n&&j<n){
		int tam=min(max_sum-row[i],max_sum-col[j]);
		a[i][j]+=tam;
		row[i]+=tam;
		col[j]+=tam;
		ans+=tam;
		if(row[i]==max_sum){
			i++;
		}if(col[j]==max_sum){
			j++;
		}
	}
	cout<<ans<<endl;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		inp();
		solve();
	}
}
