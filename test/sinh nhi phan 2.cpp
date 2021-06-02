#include<bits/stdc++.h>
using namespace std;
long long n,a[1000],ok=1;
void init(){
	for(int i=1;i<=n;i++){
		a[i]=0;
	}
}
void sinh(){
	int i=n;
	while(i>=1&&a[i]==1){
		a[i]=0;
		i--;
	}
	if(i==0){
		ok=0;
	}else{
		a[i]=1;
	}
}
void in(){
	for(int i=1;i<=n;i++){
		cout<<a[i];
	}
	cout<<" ";
}
int main(){
	int t;
	cin>>t;
	while(t--){
		cin>>n;
		init();
		ok=1;
		while(ok){
			in();
			sinh();
		}
		cout<<endl;
	}
}
