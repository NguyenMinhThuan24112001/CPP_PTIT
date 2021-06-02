#include<iostream>
#include<math.h>
using namespace std;
bool ngto(int n){
	int i;
	if(n<2){
		return false;
	}else
	{
		for(int i=2;i<=sqrt(n);i++){
			if(n%i==0){
				return false;
			}
		}
		return true;
	}
	
}
int main(){
		int n,m;
		cin>>n>>m;
		int min=n;
		if(min>m){
			min=m;
		}
		for(int j=min;j<=n+m-min;j++){
			if(ngto(j)){
				cout<<j<<" ";
			}
		}
		cout<<endl;
}
