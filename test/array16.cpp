#include<iostream>
#include<string>
#include<vector>
#include<queue>
#include<map>
#include<algorithm>
#define ll long long
using namespace std;
const int oo = 1e6+5;
int A[oo];
int main(){
	cin.tie(0); ios_base::sync_with_stdio(false);
	int test; cin >> test;
	while(test--){
		string s; cin >> s;
		priority_queue<char> q;
		int j = s.length()-1;
		while(s.at(j) >= s.at(j-1)){
			q.push(s.at(j--));
			if(j == 0) break;
		}
		if(j == 0){
			cout << -1 << endl;
			continue;
		}
		q.push(s.at(j));
		while(q.top() >= s.at(j-1)) q.pop();
		char res = q.top();
		int local = s.find(res, j);
		char c = s[local]; s[local] = s[j-1]; s[j-1] = c;
		cout << s << endl;
	}
}
