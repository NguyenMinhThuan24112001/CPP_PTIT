#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		sort(a,a+n);
		int min=a[0];
		int dem=1;
		for(int i=0;i<n;i++){
			if(a[i]>min){
				min=a[i];
				dem=0;
				break;
			}else{
				dem=1;
			}
		}if(dem==0){
			cout<<a[0]<<" "<<min;
		}else{
			cout<<"-1";
		}
		cout<<endl;
	}
}
