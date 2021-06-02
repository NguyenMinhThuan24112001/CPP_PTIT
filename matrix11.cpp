#include<bits/stdc++.h>
#define faster() cin.tie(0); ios_base::sync_with_stdio(false);
using namespace std;
int A[20][20];
// dem so cot toan 1 tu hang l->r
int maxRectangle(int l, int r, int m){
int res = 0;
for(int i=1; i<=m; i++){
bool isFull_1 = false;
for(int j=l; j<=r; j++){
if(!A[j][i]){
isFull_1 = true;
break;
}
}if
(!isFull_1) res++;
}return res;
}int main(){
faster();
int test; cin >> test;
while(test--){
int n, m; cin >> n >> m;for(int i=1; i<=n; i++){
for(int j=1; j<=m; j++) cin >> A[i][j];
}int ans = 0;
for(int i=1; i<=n; i++){
for(int j=i; j<=n; j++){
// dien tich cua hcn
ans = max(ans, maxRectangle(i, j, m) * (j-i+1));
}
}cout << ans << endl;
}
}
