#include<bits/stdc++.h>
using namespace std;
long long UCLN(long long a,long long b){
	while(b!=0){
		int i=a%b;
		a=b;
		b=i;
	}
	return a;
}
long long BCNN(long long a,long long b){
	return (a*b)/UCLN(a,b);
}
void tinh(int x,int y,int z,long long n){
	long long bc=BCNN(x,BCNN(y,z));
	long long p=pow(10,n-1);
	if(p%bc==0){
		cout<<p<<endl;
	}else{
		long long tam=p/bc*bc;
		if(tam+bc<pow(10,n)){
			cout<<tam+bc<<endl;
		}
		else{
			cout<<-1<<endl;
		}
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int x,y,z;
		long long n;
		cin>>x>>y>>z>>n;
		tinh(x,y,z,n);
	}
}
