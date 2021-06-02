#include<iostream>
#include<queue>
#define faster() cin.tie(0); ios_base::sync_with_stdio(false);
using namespace std;
const int oo = 2*1e3;
int A[oo][oo] = {0}, visit[oo][oo] = {0};
int n, m, x, y, z, t;
/*
y tuong dung thuat toan tim kiem theo chieu rong BFS de duyet
mang visit[] de danh dau da di
*/
int BFS(){
int ans = 0;
if(!A[x+1][y+1]) return -1;
queue<pair<int, int> > q;
// pair<first, second> first la hang thu i - second: cot thu j
q.push(pair<int, int>(x+1,y+1));
while(!q.empty()){
int len = 0, SIZE = q.size();
// ta chi lap dung SIZE lan (vi ta can tim so buoc di ngan nhat)
while(len < SIZE){
pair<int, int> local = q.front(); q.pop();
int i = local.first, j = local.second;
if(i == z+1 && j == t+1) return ans;
// neu A[i][j] = 1(co the di) thi ta push vao queue va danh dau visit[i][j] =1
if(A[i+1][j] && !visit[i+1][j]){
q.push(pair<int, int>(i+1, j));visit[i+1][j] = 1;
}if(A[i][j+1] && !visit[i][j+1]){
q.push(pair<int, int>(i, j+1));
visit[i][j+1] = 1;
}if(A[i-1][j] && !visit[i-1][j]){
q.push(pair<int, int>(i-1, j));
visit[i-1][j] = 1;
}if(A[i][j-1] && !visit[i][j-1]){
q.push(pair<int, int>(i, j-1));
visit[i][j-1] = 1;
}len++;
}ans++;
}return -1;
}int main(){
faster();
int test; cin >> test;
while(test--){
cin >> n >> m >> x >> y >> z >> t;
for(int i=1; i<=n; i++){
for(int j=1; j<=m; j++){
cin >> A[i][j]; visit[i][j] = 0;
}
}cout << BFS() << endl;
}
}
