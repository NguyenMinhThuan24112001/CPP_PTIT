#include<bits/stdc++.h>
#define faster() cin.tie(0); ios_base::sync_with_stdio(false);
#define ll long long
using namespace std;
const int oo = 105;
int A[oo][oo], B[oo][oo];
// y tuong tu bai code in ma tran theo chieu nguoc kim dong ho
int main(){
	faster();
	int test; cin >> test;
	while(test--){
		int n, m; cin >> n >> m;
		for(int i=0; i<n; i++){
			for(int j=0; j<m; j++) cin >> A[i][j];
		}
		int d = 0, l = n, s = m;
		while(d <= n/2 && d <= m/2){
			vector<int> v;
			// lay gia tri 1 vong gan vao vector
			for(int i=d; i<s; i++) v.push_back(A[d][i]);
			for(int i=d+1; i<l; i++) v.push_back(A[i][s-1]);
			for(int i=s-2; i>=d; i--) v.push_back(A[l-1][i]); 
			for(int i=l-2; i>d; i--) v.push_back(A[i][d]);
			if(v.size() == 0) break;
			// chen phan tu cuoi cua vector vao dau vector
			int c=v.at(v.size()-1); v.insert(v.begin(), c);
			int j = -1;
			// van la vong for nhu vay nhung ta se gan gia tri cho mang B theo vong for tren kia
			for(int i=d; i<s; i++) B[d][i] = v.at(++j);
			for(int i=d+1; i<l; i++) B[i][s-1] = v.at(++j);
			for(int i=s-2; i>=d; i--) B[l-1][i] = v.at(++j); 
			for(int i=l-2; i>d; i--) B[i][d] = v.at(++j);
			d++; l--; s--;
		}
		for(int i=0; i<n; i++){
			for(int j=0; j<m; j++) cout << B[i][j] << " ";
		}
		cout << endl;
	}
}
