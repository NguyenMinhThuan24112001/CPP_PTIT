#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int oo = 105;
int A[oo][oo], B[oo][oo];
// dung 1 mang B de mang A ko thay doi
int main(){
int test; cin >> test;
while(test--){
int n, m; cin >> n >> m;
for(int i=0; i<n; i++){
for(int j=0; j<m; j++){cin >> A[i][j];
B[i][j] = A[i][j];
}
}for(int i=0; i<n; i++){
for(int j=0; j<m; j++){
if(A[i][j] == 1){
// cho cot j = 1
for(int k=0; k<n; k++) B[k][j] = 1;
// cho hang i bang 1
for(int k=0; k<m; k++) B[i][k] = 1;
}
}
}for(int i=0; i<n; i++){
for(int j=0; j<m; j++) cout << B[i][j] << " ";
cout << endl;
}cout << endl;
}
}
