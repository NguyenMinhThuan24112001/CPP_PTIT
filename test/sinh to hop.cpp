#include<bits/stdc++.h>
using namespace std;
long long n,k,a[1000],ok=1;
void init(){
	for(int i=1;i<=k;i++){
		a[i]=i;
	}
}
void sinh(){
	int i=k;
	while(i>=1&&a[i]==n-k+i){
		i--;
	}if(i==0){
		ok=0;
	}else{
		a[i]++;
		for(int j=i+1;j<=n;j++){
			a[j]=a[i]+j-i;
		}
	}
}
void in(){
	for(int i=1;i<=k;i++){
		cout<<a[i];
	}
	cout<<" ";
}
int main(){
	int t;
	cin>>t;
	while(t--){
		cin>>n>>k;
		init();
		ok=1;
		while(ok){
			in();
			sinh();
		}
		cout<<endl;
	}
}
