#include<bits/stdc++.h>
#define faster() cin.tie(0); ios_base::sync_with_stdio(false);
#define ll long long
using namespace std;
const int oo = 100;
/*
y tuong: su dung thuat toan quay lui(backTracking)
de duyet tat ca cac cach di chuyen den A[n-1][n-1]
*/
ll A[oo][oo], s, n, k, ans;
void backTrack(int i, int j){
s += A[i][j];
if(i == n-1 && j == n-1){
if(s == k) ans++;
}// neu s van con < k thi ta con duyet
else if(s <= k){
if(i < n-1) backTrack(i+1, j);
if(j < n-1) backTrack(i, j+1);
}//tra lai s luc chua cong A[i][j] cho thang dang sau no dung
s -= A[i][j];
}int main(){
faster();
int test; cin >> test;
while(test--){
cin >> n >> k;
s = 0; ans = 0;
for(int i=0; i<n; i++){
for(int j=0; j<n; j++) cin >> A[i][j];
}backTrack(0,0);
cout << ans << endl;
}
}
