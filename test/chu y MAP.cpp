#include<bits/stdc++.h>
using namespace std;
void solve(string s){
	map<string,int> m;
	stringstream ss(s);
	string tam,dem;
	while(ss>>tam){
		m[tam]++;
	}
	int res=INT_MIN;
	for(auto& p:m){
		if(p.second>res){
			res=p.second;
			dem=p.first;
		}
	}
	cout<<dem<<" "<<m[dem]<<endl;
}
int main()
