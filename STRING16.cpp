#include<bits/stdc++.h>
using namespace std;
long long gt[21];
void init(){
	gt[0]=1;
	for(int i=1;i<=20;i++){
		gt[i]=i*gt[i-1];
	}
}
long long solve(int n,int g,int r,int b){
	int remain=n-r-g-b;
	long long res=0;
	for(int R=0;R<=remain;R++){
		for(int B=0;B<=remain-R;B++){
			int G=remain-R-B;
			res+=gt[n]/(gt[r+R]*gt[b+B]*gt[g+G]);
		}
	}
	return res;
}
int main(){
	int t;
	init();
	cin>>t;
	while(t--){
		int n,r,g,b;
		cin>>n>>r>>g>>b;
		cout<<solve(n,r,g,b)<<endl;
	}
}
