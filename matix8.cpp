#include<bits/stdc++.h>
#define pb push_back
#define all(a) a.begin(), a.end()
#define faster() cin.tie(0); ios_base::sync_with_stdio(false);
using namespace std;const int oo = 50;
int A[oo][oo], n;
/*
n = 2;
1 2 3 4 5 6 7 8
9 10 11 12 13 14 15 16
17 18 19 20 21 22 23 24
25 26 27 28 29 30 31 32
33 34 35 36 37 38 39 40
41 42 43 44 45 46 47 48
49 50 51 52 53 54 55 56
57 58 59 60 61 62 63 64
cuon 1: 36 28 20 21 22 30 38 46 54 53 52 51 50 42 34 26 18 10 2 3 4 5 6 7 8 16 24 32 40
48 56 64
cuon 2: 29 37 45 44 43 35 27 19 11 12 13 14 15 23 31 39 47 55 63 62 61 60 59 58 57 49 41
33 25 17 9 1
*/
void solved(){
/*
ta tim cuon thu 2(COIL_A) truoc;
sau do COIL_B[i] = 4*n*4*n - COIL_A[i] + 1;
*/
int SIZE = 4*n*4*n;
vector<int> COIL_A, COIL_B;
int col_start = 4*n, row_start = 4*n-2, col_end = 4*n-2, row_end = 4*n-4;
int value = 1-4*n;
while(COIL_A.size() < SIZE/2){
for(int i=0; i<col_start; i++){
value += 4*n;
COIL_A.pb(value);
}for(int i=0; i<row_start; i++){
value++;
COIL_A.pb(value);
}for(int i=0; i<col_end; i++){
value -= 4*n;
COIL_A.pb(value);
}for(int i=0; i<row_end; i++){
value--;
COIL_A.pb(value);
}row_end -= 4; row_start -= 4;
col_end -= 4; col_start -= 4;
}reverse(all(COIL_A));
for(auto ele: COIL_A) COIL_B.pb(SIZE - ele + 1);for(auto ele: COIL_B) cout << ele << " ";
cout << endl;
for(auto ele: COIL_A) cout << ele << " ";
}int main(){
faster();
int test; cin >> test;
while(test--){
cin >> n;
int res = 0;
for(int i=0; i<4*n; i++){
for(int j=0; j<4*n; j++) A[i][j] = ++res;
}solved();
cout << endl;
}
}
