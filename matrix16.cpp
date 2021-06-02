#include<bits/stdc++.h>
#define faster() cin.tie(0); ios_base::sync_with_stdio(false);
#define ll long long
using namespace std;
const int oo = 30;
pair<int, int> PAIR[oo][oo];
// pair[i][j] -first: do dai X dai nhat tinh theo row cua matran tai o thu hang i cot j
// - second: do dai canh X dai nhat tinh theo column cua matran tai o thu hang i cot j
/*
X O X X X (1,1) (0,0) (1,1) (2,1) (3,1)
X X X X X (1,2) (2,1) (3,2) (4,2) (5,2)
X X O X O PAIR-> (1,3) (2,2) (0,0) (1,3) (0,0)
X X X X X (1,4) (2,3) (3,1) (4,4) (5,1)
X X X O O (1,5) (2,4) (3,2) (0,0) (0,0)
*/
int A[oo][oo], n;
// set mang Pair chuan bi tinh do dai canh hinh vuong
void setPair(){
for(int i=1; i<=n; i++){
for(int j=1; j<=n; j++){
if(A[i][j]){
PAIR[i][j].first = PAIR[i][j-1].first + 1;
PAIR[i][j].second = PAIR[i-1][j].second + 1;
}else PAIR[i][j] = pair<int, int>(0, 0);
}
}
}int solved(){
faster();
// xet tung hang- xet do dai canh hinh vuong
int ans = 0;
for(int i=1; i<=n; i++){
int MAX = n-i+1;
// xet do dai canh hinh vuong j->k
for(int j=1; j<=n; j++){
for(int k=j; k<=n; k++){
if(!A[i][k] || k-j+1 > MAX) break;
else{
// tinh 4 canh cua hinh vuong
int row1 = PAIR[i][k].first - PAIR[i][j].first + 1;
if(row1 <= ans) continue;
pair<int, int> p1 = PAIR[i+row1-1][j];
pair<int, int> p2 = PAIR[i+row1-1][k];
int row2 = p2.first - p1.first + 1;
int col1 = p1.second - PAIR[i][j].second + 1;
int col2 = p2.second - PAIR[i][k].second + 1;if(row1 == row2 && row1 == col1 && row1 == col2) ans= max(ans, row1);
}
}
}
}return ans;
}int main(){
cin.tie(0); ios_base::sync_with_stdio(false);
int test; cin >> test;
while(test--){
cin >> n;
// set PAIR ve (0,0)
for(int i=0; i<=n; i++){
for(int j=0; j<=n; j++){
PAIR[i][j].first = 0;
PAIR[i][j].second = 0;
}
}for(int i=1; i<=n; i++){
for(int j=1; j<=n; j++){
char c; cin >> c;
A[i][j] = (c == 'X')? 1 : 0;
}
}setPair();
cout << solved() << endl;
}
}
