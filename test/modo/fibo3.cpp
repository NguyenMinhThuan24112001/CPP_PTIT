#include<bits/stdc++.h>
using namespace std;
bool check[1000];
bool so(int n){
	if(n<2){
		return 1;
	}
	int a=0,b=1,c=0;
	while(c<n){
		c=a+b;
		a=b;
		b=c;
		if(c==n)
			return 1;
	}
	return 0;
}
int main(){
	int t;
	int n,a[100],i;
	cin>>t;
	for(i=0;i<1001;i++){
		check[i]=so(i);
	}
	while(t--){
		cin>>n;
		for(i=0;i<n;i++){
			cin>>a[i];
		}
		for(i=0;i<n;i++){
			if(check[a[i]])
				cout<<a[i]<<" ";
		}
		cout<<endl;
	}
}
