#include<bits/stdc++.h>
using namespace std;
bool subStr2ofstr1(string str1, string substr) {
map<char, int>mpstr1, mpsubstr;// khai b�o 2 map mpstr1, mpsubstr
for (int i = 0; i < str1.length(); i++) mpstr1[str1[i]]++;// ��m s? l?n xu?t hi?n
for (int i = 0; i < substr.length(); i++) mpsubstr[substr[i]]++;// �?m s? l?n
//map[key]=value
for (map<char, int>::iterator it= mpsubstr.begin(); it != mpsubstr.end(); it++)
{
if (mpstr1[it->first] < mpsubstr[it->first]) return false;
}
return true;
}
int main() {
cin.tie(0); ios_base::sync_with_stdio(false);
int t; cin >> t;
while (t--) {
string str1, subStr;
cin >> str1 >> subStr;
int MIN = 150;// khai b�o MIN >100l� �c, ta ch?n MIN=150
string ans;// chu?i k?t qu?
bool check = false;
for (int i = 0; i < str1.length(); i++) {
string res;
for (int j = i; j < str1.length(); j++) {
res.push_back(str1[j]);
if (subStr2ofstr1(res, subStr) == true && res.length() <
MIN) {
MIN = res.size();//t?m chu?i ans c� �? d�i ng�n
ans = res;// c?p nh�p l?i chu?i ans
check = true;// ��nh d?u l� t?n t?i k?t qu? b�i
}
}
}
if (check == true) cout << ans;
else cout << -1;// n?u kh�ng t?n t?i k?t qu? th? in -1
cout << endl;
}
return 0;
}
