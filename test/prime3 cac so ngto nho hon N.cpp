#include<bits/stdc++.h>
using namespace std;
//long long pt(long long n){
//	if(n<2){
//		return 0;
//	}
//	for(int i=2;i<=sqrt(n);i++){
//		if(n%i==0){
//			return 0;
//		}
//	}
//	return 1;
//}
//int main(){
//	int t;
//	cin>>t;
//	while(t--){
//		long long n;
//		cin>>n;
//		for(int i=2;i<=n;i++){
//			if(pt(i)==1){
//				cout<<i<<" ";
//			}
//		}
//		cout<<endl
//	}
//}
bool p[100000];
void solve(){
	memset(p,true,sizeof(p));
	p[0]=false;
	p[1]=false;
	for(int i=2;i<=sqrt(100000);i++){
		if(p[i]){
			for(int j=i*i;j<=100000;j+=i){
				p[j]=false;
			}
		}
	}
}
int main(){
	solve();
	int t;
	cin>>t;
	while(t--){
		long long n;
		cin>>n;
		for(int i=0;i<=n;i++){
			if(p[i]){
				cout<<i<<" ";
			}
		}
		cout<<endl;
	}
}
