#include<iostream>
#include<algorithm>
#include<vector>
#include<queue>
#define ll long long
using namespace std;
const int oo = 1e6 + 5;
int main(){
	int test; cin >> test;
	while(test--){
		vector<ll> v1, v2;
		int n, m; cin >> n >> m;
		for(int i=0; i<n; i++){
			ll val; cin >> val;
			v1.push_back(val);
		}
		for(int i=0; i<m; i++){
			ll val; cin >> val;
			v2.push_back(val);
		}
		ll ans = *(max_element(v1.begin(), v1.end())) * *(min_element(v2.begin(), v2.end()));
		cout << ans << endl;
	}
}
