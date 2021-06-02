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
		int min=a[0],max=a[0];
		for(int i=0;i<n;i++){
			if(a[i]>=max){
				max=a[i];
			}
		}
		for(int i=0;i<n;i++){
			if(a[i]<=min){
				min=a[i];
			}
		}
		long long x=0;
		for(int i=min+1;i<max;i++){
			int stop=0;
			for(int j=0;j<n;j++){
				if(a[j]==i){
					stop=0;
					break;
				}else{
					stop++;
				}
			}
			if(stop!=0){
				x++;
			}
		}
		cout<<x<<endl;
	}
}
