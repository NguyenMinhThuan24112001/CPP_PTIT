#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n];
		int ok=1;
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		sort(a,a+n);
		int min=a[0];
		for(int i=0;i<n;i++){
			if(a[i]>min){
				min=a[i];
				ok=0;
				break;
			}else{
				ok=1;
			}
		}
		if(ok==0){
			cout<<a[0]<<" "<<min;
		}else if(ok==1){
			cout<<-1;
		}
		cout<<endl;
	}
}
