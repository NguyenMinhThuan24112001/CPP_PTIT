#include<iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	for(int i=1;i<=t;i++){
		int n,m,a,b;
		int dem=0;
		cin>>n>>m>>a>>b;
		int min=n;
		if(min>m){
			min=m;
		}
		for(int j=min;j<=m+n-min;j++){
			if(j%a==0||j%b==0){
				dem++;
			}
		}cout<<dem<<endl;
	}
}
