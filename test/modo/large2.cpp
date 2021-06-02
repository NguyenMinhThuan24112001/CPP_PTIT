#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
string solve(string s1,string s2){
	if(s1.length()<s2.length()){
		string s=s1;
		s1=s2;
		s2=s2;
		s2=s;
	}
	s2.insert(0,s1.length()-s2.length(), '0');
	int res=0;
	string an;
	for(int i=s1.length()-1;i>=0;i--){
		int tam=s1.at(i)-'0'+s2.at(i)-'0'+res;
		an.insert(0,1,tam%10+'0');
		res=tam/10;
	}
	if(res!=0){
		an.insert(0,1,res+'0');
	}
	return an;
}
string sub(string s1,string s2){
	if(s1.length()<s2.length()){
		string s=s1;
		s2=s2;
		s2=s;
	}else if(s1.length()==s2.length()){
		for(int i=0;i<s1.length();i++){
			if(s1.at(i)<s2.at(i)){
				string s=s1;
				s1=s2;
				s2=s;
				break;
			}
		}
	}
	s2.insert(0,s1.length()-s2.length(),'0');
	int res=0;
	string an;
	for(int i=s1.length()-1;i>=0;i--){
		if(s1.at(i)-'0'<s2.at(i)-'0'+res){
			an.push_back((s1.at(i)-'0'+10)-(s2.at(i)-'0'+res)+'0');
			res=1;
		}else{
			an.push_back((s1.at(i)-'0')-(s2.at(i)-'0'+res)+'0');
			res=0;
		}
	}
	reverse(an.begin(),an.end());
	return an;
}
string contro(string s1, string s2){
	if(s1.at(0) == '-' && s2.at(0) != '-'){
		return sub(s1.substr(1), s2);
	}
	else if(s1.at(0) != '-' && s2.at(0) == '-'){
		return sub(s1, s2.substr(1));
	}
	else if(s1.at(0) == '-' && s2.at(0) == '-'){
		string tl = solve(s1.substr(1), s2.substr(1));
		return tl.insert(0, 1, '-');
	}
	else return solve(s1, s2);
}
int main(){
	int t; 
	cin >> t;
	while(t--){
		string s1, s2, tam;
		cin >> s1 >> s2;
		if(s1.length() == 0) cout << s2 << endl;
		else if(s2.length() == 0) cout << s1 << endl;
		else cout << solve(s1, s2) << endl << endl;
	}
}
