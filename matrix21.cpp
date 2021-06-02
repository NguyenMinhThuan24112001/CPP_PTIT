#include<bits/stdc++.h>
#define faster() cin.tie(0); ios_base::sync_with_stdio(false);
const int oo = 250;
#define ll long long
using namespace std;
ll A[oo][oo], dp[oo][oo] = {0}, n, m;
/*
bai nay su dung quy hoach dong
bai nay nen goi dp[i][j][k] la tong lon nhat cua day xet tu vi tri j->k trong hang i
tuy nhien dp[i][j][k] chi phu thuoc vao dp[i-1][j][k] nen ta co the thay bang
mang 2 chieu dp[i][j] tong lon nhat xet vi tri i->j trong 1 hang
*/
ll maxRectangle(){
ll ans = 0;
// xet tai hang thu i tu vi tri j->k
for(int i=1; i<=n; i++){
for(int j=1; j<=m; j++){ll sum = 0;
for(int k=j; k<=m; k++){
sum += A[i][k];
// ta co the viet dp[j][k] = max(dp[j][k] + sum, sum)
dp[j][k] = (dp[j][k] >= 0)? dp[j][k] + sum : sum;
ans = max(ans, dp[j][k]);
}
}
}return ans;
}int main(){
faster();
int test; cin >> test;
while(test--){
cin >> n >> m;
for(int i=1; i<=n; i++){
for(int j=1; j<=m; j++){
cin >> A[i][j];
}
}//reset dp[] = 0
for(int i=0; i<oo; i++){
for(int j=0; j<oo; j++) dp[i][j] = 0;
}cout << maxRectangle() << endl;
}
}
