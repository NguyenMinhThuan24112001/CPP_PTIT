#include<bits/stdc++.h>
#define faster() cin.tie(0); ios_base::sync_with_stdio(false);
#define ll long long
using namespace std;
const int mod = 1e9+7;
const int oo = 505;
int A[oo][oo], B[oo][oo] = {0}, n, m;
vector<pair<int, int> > v;
/*
y tuong:
dung thuat toan tim kiem theo chieu rong BFS
va mang B de danh dau cac row va col da di
(B[][] = 1 : da di / B[][] = 0: chua di)
ta di tu cac phan tu O vong ben ngoai vao ben trong
vi vay neu o thu i, j nao = 'C' ta cho A[i][j] = 1;
va them no vao vector v
- sau do duyet toan bo vector v
*/
// tim duong di xung quanh
void haveRoad(int row, int col, queue<pair<int, int> > &q){
if(A[row-1][col] && !B[row-1][col]) q.push(pair<int, int>(row-1, col));
if(A[row][col-1] && !B[row][col-1]) q.push(pair<int, int>(row, col-1));
if(A[row+1][col] && !B[row+1][col]) q.push(pair<int, int>(row+1, col));
if(A[row][col+1] && !B[row][col+1]) q.push(pair<int, int>(row, col+1));
}void BFS(){
for(int i=0; i<v.size(); i++){
if(!B[v[i].first][v[i].second]){
queue<pair<int, int> > q;if(!B[v[i].first][v[i].second]) q.push(v[i]);
while(!q.empty()){
pair<int, int> par = q.front(); q.pop();
B[par.first][par.second] = 1;
haveRoad(par.first, par.second, q);
}
}
}
}int main(){
faster();
int test; cin >> test;
while(test--){
cin >> n >> m;
v.clear();
for(int i=1; i<=n; i++){
for(int j=1; j<=m; j++){
B[i][j] = 0;
char c; cin >> c;
if(c == 'O'){
// neu c == 'O' ta cho A[i][j] = 1 tuc la co the di
A[i][j] = 1;
// ta xet tu vong ngoai vao nen chi lay nhung vi tri tren
if(i == 1 || j == 1 || i == n || j == m){
pair<int, int> p = pair<int, int>(i, j);
v.push_back(p);
}
}else A[i][j] = 0;
}
}BFS();
// cac phan tu B[i][j] = 1 thi thay the = 'O'
// else thay the = 'X'
for(int i=1; i<=n; i++){
for(int j=1; j<=m; j++){
if(B[i][j]) cout << 'O' << " ";
else cout << 'X' << " ";
}cout << endl;
}cout << endl;
}
}
