#include<bits/stdc++.h>
using namespace std;
int solve(int a[],int n,int x){
	int l=0,r=n-1;
	while(l<=r){
		int m=(r+l)/2;
		if(a[m]==x){
			return 1;
		}else if(a[m]>x){
			r=m-1;
		}else{
			l=m+1;
		}
	}
	return -1;
}
