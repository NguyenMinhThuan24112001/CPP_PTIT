//#include<bits/stdc++.h>
//#define faster() cin.tie(0); ios_base::sync_with_stdio(false);
//#define ll long long
//using namespace std;
//const int mod = 1e9+7;
//const int oo = 505;
///*
//y tuong su dung ki thuat deque MIN/MAX tren doan tinh tien(co the su dung STACK)
//tai hang thu i ta dung quy hoach dong de tinh H[i][j]
//H[i][j]: la do dai day 1 lien tiep tinh xet o thu hang i cot j
//vi H[i][j] chi phu thuoc vao H[i-1][j] nen ta co the toi uu bo nho bang mang 1 chieu H[i]
//ky thuat deque:
//de bai yeu cau voi moi vi tri i tim vi tri left va right
//sao cho left < i < right va A[i] = min(A[left->right])
//cho mang A[] = {1,5,6,4,3,3,4,6,2}
//voi thuat toan trau bo thi mat O(n^2)
//voi deque khi xet 1 phan tu A[i] thi ta co the biet ngay dc vi tri left va right
//(cac b co the search gg ve deque)
//*/
//int A[oo][oo], H[oo] = {0};
//int main(){
//faster();
//int test; cin >> test;
//while(test--){
//int n, m; cin >> n >> m;
//for(int i=1; i<=n; i++){
//for(int j=1; j<=m; j++) cin >> A[i][j];
//}int ans = 0;
//for(int i=1; i<=n; i++){
//// quy hoach dong tim H[i]
//for(int j=1; j<=m; j++) H[j] = (A[i][j])? H[j] + 1 : 0;int L[oo], R[oo], D[oo], P[oo];
//// L[i], R[i]: lan luot la 2 vi tri xa nhat ma H[i] = min(H[L[i] -> R[i]])
//// tuc la H[i] <= H[k] voi moi k thuoc khoang [L[i], R[i]]
//// cac ban co the dung STACK(code minh de ben duoi) thay cho chomang D va P
//int top = 0;
//D[0] = 0;
//for(int j=1; j<=m; j++){
//while(top > 0 && H[D[top]] >= H[j]) top--;
//L[j] = D[top] + 1;
//D[++top] = j;
//}P[0] = m+1; top = 0;
//for(int j=m; j>=1; j--){
//while(top > 0 && H[P[top]] >= H[j]) top--;
//R[j] = P[top] - 1;
//P[++top] = j;
//}for(int j=1; j<=m; j++) ans = max(ans, (R[j] - L[j] + 1) * H[j]);
//}//
//code su dung stack minh de ben duoi
//cout << ans << endl;
//}
//}

#include<iostream>
#include<algorithm>
#include<cmath>
#include<vector>
#include<stack>
#include<queue>
#define ll long long
using namespace std;
const int mod = 1e9+7;
const int oo = 505;
int A[oo][oo], H[oo] = {0};
int main(){
cin.tie(0); ios_base::sync_with_stdio(false);
int test; cin >> test;
while(test--){
int n, m; cin >> n >> m;
for(int i=1; i<=n; i++){
for(int j=1; j<=m; j++) cin >> A[i][j];
}int ans = 0;
for(int i=1; i<=n; i++){
for(int j=1; j<=m; j++) H[j] = (A[i][j])? H[j] + 1 : 0;
int L[oo], R[oo];stack<int> stc1, stc2;
stc1.push(0);
for(int j=1; j<=m; j++){
while(stc1.size() > 1 && H[stc1.top()] >= H[j]) stc1.pop();
L[j] = stc1.top() + 1;
stc1.push(j);
}stc2.push(m+1);
for(int j=m; j>=1; j--){
while(stc2.size() > 1 && H[stc2.top()] >= H[j]) stc2.pop();
R[j] = stc2.top() - 1;
stc2.push(j);
}for(int j=1; j<=m; j++) ans = max(ans, (R[j] - L[j] + 1) * H[j]);
}cout << ans << endl;
}
}

