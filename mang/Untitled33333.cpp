#include<iostream>
#include<string>
#include<vector>
#include<queue>
#include<map>
#include<algorithm>
#define ll long long
using namespace std;
const int oo = 1e3+5;
int A[oo], F[oo] = {0};
int main(){
	cin.tie(0); ios_base::sync_with_stdio(false);
	int test; cin >> test;
	while(test--){
		int n; cin >> n;
		for(int i=0; i<n; i++) cin >> A[i];
		F[0] = 1;
		int ans = 1;
		for(int i=1; i<n; i++){
			int res = 0;
			for(int j=0; j<i; j++){
				if(A[i] > A[j]){
					if(F[j]>res){
						res=F[j];
					}else{
						res=res;
					}
				}
			}
			F[i] = res + 1;
			if(ans>F[i]){
				ans=ans;
			}else{
				ans=F[i];
			}
		}
		cout << ans << endl;
	}
}
