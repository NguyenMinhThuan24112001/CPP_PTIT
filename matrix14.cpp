#include<bits/stdc++.h>
#define faster() cin.tie(0); ios_base::sync_with_stdio(false);
#define ll long long
const int MAX = 505;
using namespace std;
int A[MAX][MAX], dp[MAX][MAX] = {0};
/*
su dung quy hoach dong
dp[i][j] la hinh vuong 1-1 lon nhat xet den vi tri hang i cot j
o hang i cot j la o goc phai ben duoi cua hinh vuong
*/
int main(){
faster();
int test; cin >> test;
while(test--){
int n, m; cin >> n >> m;
for(int i=1; i<=n; i++){
for(int j=1; j<=m; j++) cin >> A[i][j];
}int ans = 0;
for(int i=1; i<=n; i++){
for(int j=1; j<=m; j++){
if(A[i][j]){
/*
1 1 11 1 1
0 1 1
trong truong hop nay se giai thich vi sao la min ma ko
phai max
neu la max thi dp[3][3] = 3 (sai)
*/
dp[i][j] = min(dp[i-1][j], min(dp[i-1][j-1], dp[i][j-1]));
dp[i][j] += 1;
}else dp[i][j] = 0;
ans = max(ans, dp[i][j]);
}
}cout << ans << endl;
}
}
