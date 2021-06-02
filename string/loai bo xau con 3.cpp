#include<bits/stdc++.h>
#include<string.h>
#include<ctype.h>
using namespace std;
int main(){
	string s1,s2;
	getline(cin,s1);
	getline(cin,s2);
	int pos=s1.find(s2);
	s1.erase(pos,s2.size());
	cout<<s1<<endl;
}

