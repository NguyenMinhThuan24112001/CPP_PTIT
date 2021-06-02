#include<iostream>
using namespace std;
const int oo = 105;
int A[oo][oo], n;
/*
y tuong: tim max tong cac hang va cac cotluon co 1 phep bien doi sao cho tat cac cac hang = max nay
*/
// tong max hang
int maxSumRow(){
int res = 0;
for(int i=0; i<n; i++){
int sum = 0;
for(int j=0; j<n; j++) sum += A[i][j];
res = max(sum, res);
}return res;
}//tong max cot
int maxSumColumn(){
int res = 0;
for(int i=0; i<n; i++){
int sum = 0;
for(int j=0; j<n; j++) sum += A[j][i];
res = max(sum, res);
}return res;
}int main(){
int test; cin >> test;
while(test--){
cin >> n;
// tong cua cac mang A
int sumArr = 0;
for(int i=0; i<n; i++){
for(int j=0; j<n; j++){
cin >> A[i][j];
sumArr += A[i][j];
}
}int MAX = max(maxSumColumn(), maxSumRow());
int ans = MAX*2*n - 2*sumArr;
cout << ans/2 << endl;
}
}
