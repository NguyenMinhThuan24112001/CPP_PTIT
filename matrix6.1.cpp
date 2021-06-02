#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
int test; cin >> test;
while(test--){
int n; cin >> n;
int B[n+1][n+1];
for(int i=0; i<n; i++){
for(int j=0; j<n; j++){
cin >> B[i][j];
if(i == 0 || i == n-1 || j == 0 || j == n-1) cout << B[i][j] << " ";
else cout << " ";
}
cout << endl;
}
cout << endl;
}
}
