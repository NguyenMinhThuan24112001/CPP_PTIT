#include<bits/stdc++.h>
using namespace std;
int ngto(int n){
	int i;
	if(n==0||n==1){
		return 0;
	}else{
		for(int i=2;i<=sqrt(n);i++){
			if(n%i==0){
				return 0;
			}
		}
		return 1;
	}
}
vector<long long> res;
void init(){
	for(int i=1;i<=32;i++){
		if(ngto(i)){
			long long x=pow(2,i);
			if(ngto(x-1)){
				long long h=x/2*(x-1);
				res.push_back(h);
			}
		}
	}
}
bool check(long long n){
	for(int i=0;i<res.size();i++){
		if(res[i]==n)
		return true;
	}
	return false;
}
int main(){
	init();
	int t;
	cin>>t;
	while(t--){
		long long n;
		cin>>n;
		if(check(n)){
			cout<<"1"<<endl;
		}else{
			cout<<"0"<<endl;
		}
	}
}
