#include<iostream>
#include<string>
#include<vector>
#include<map>
#include<queue>
#include<cmath>
#include<set>
#include<algorithm>
#define ll long long
using namespace std;
const int oo = 1e7+5;
int A[oo];
int main(){
	cin.tie(0); ios_base::sync_with_stdio(false);
	int test; cin >> test;
	while(test--){
		int n, k; cin >> n >> k;
		for(int i=0; i<n; i++) cin >> A[i];
		int res = 0;
		for(int i=0; i<k; i++) res = max(res, A[i]);
		cout << res << " ";
		for(int i=1; i<=n-k; i++){
			if(A[i-1] == res){
				res = 0;
				for(int j=i; j<=i+k; j++) res = max(res, A[j]);
			}
			else if(A[k+i-1] > res) res = A[k+i-1];
			cout << res << " ";
		}
		cout << endl;
	}
}
