#include<iostream>
#include<string>
#include<vector>
#include<queue>
#include<algorithm>
#define ll long long
using namespace std;
const int oo = 105;
ll A[oo], F[oo];
int main(){
	cin.tie(0); ios_base::sync_with_stdio(false);
	int test; cin >> test;
	while(test--){
		int n; cin >> n;
		for(int i=0; i<n; i++) cin >> A[i];
		ll ans = 0;
		for(int i=0; i<n; i++){
			ll res = 1;
			for(int j=i; j<n; j++){
				res *= A[j];
				ans = max(ans, res);
			}
		}
		cout << ans << endl;
	}
}
