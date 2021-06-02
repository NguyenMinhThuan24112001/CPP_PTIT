#include<bits/stdc++.h>
using namespace std;
bool check(string s){
	int a[26]={0};
	for(int i=0;i<s.length();i++){
		a[s[i]-'a']++;
	}
	priority_queue<int> pq;
	for(int i=0;i<26;i++){
		if(a[i])
		    pq.push(a[i]);
	}
	int tmp=-1;
	int cnt=0;
	while(!pq.empty()){
		int t=pq.top();
		pq.pop();
		if(tmp>0){
		      pq.push(tmp);
		  }
		t--;
		tmp=t;
		cnt++;      
	}
	if(cnt==s.length())
		return true;
	return false;
}
int main(){
	int t;
	cin>>t;
	cin.ignore();
	while(t--){
		string s;
		cin>>s;
		cout<<check(s)<<endl;
	}
}
