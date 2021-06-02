#include<iostream>
#include<algorithm>
#include<vector>
#include<set>
#define ll long long
using namespace std;
const int oo = 1e6 + 5;
int main(){
    cin.tie(0); ios_base::sync_with_stdio(false);
	int test; cin >> test;
	while(test--){
		set<int> st;
		int n; cin >> n;
		for(int i=0; i<n; i++){
			int val; cin >> val;
			st.insert(val);
		}
		cout << (*(--st.end())) - (*(st.begin())) - st.size() + 1 << endl;
	}
}
