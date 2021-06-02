#include<bits/stdc++.h>
using namespace std;
const int oo = 105;
int A[oo][oo];
int main(){
int test; cin >> test;
while(test--){
int n; cin >> n;
for(int i=0; i<n; i++){
for(int j=0; j<n; j++) cin >> A[i][j];
}for(int i=0; i<n; i++){
// neu la hang chan thi ta in tu 0->n
if(i % 2 == 0){
for(int j=0; j<n; j++) cout << A[i][j] << " ";
}//le thi in tu n-1 -> 0
else{
for(int j=n-1; j>=0; j--) cout << A[i][j] << " ";
}
}cout << endl;
}
}
