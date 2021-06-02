#include<iostream>
using namespace std;
int main() {
 long long t; cin >> t;
 cin.ignore();// chú ? d?ng này, n?u ko có b?n s? ko nh?p ðc b? test ti?p theo
 while (t--) {
 long long start;
 string s;// chu?i ban ð?u
 getline(cin, s);
 long long i = s.size() - 1;
 string res = "";// kh?i t?o chuô? ð? x? l?
 long long end = s.size();// kh?i t?o giá tr? k?t thúc c?a vong l?p
 while (i >= 0) {
 if (s[i] == ' ') {// t?m k? t? kho?ng tr?ng ð?u tiên
 start = i + 1;// sau khi xác ð?nh v? trí c?a kho?ng tr?ng, ta s? l?y ðc 1 t?
 while (start != end) {// th?c hi?n vong l?p ð? l?y t?ng t? c?a chu?i m?
 res += s[start++];// c?ng t?ng k? t? c?a s t? kho?ng tr?ng cho ð?n h?t
 }
 res += " ";// c?ng kho?ng tr?ng sau khi l?y ðý?c 1 t?
 end = i;// ð?t bi?n k?t thuc vong l?p b?ng v? trí kho?ng tr?ng trý?c ðó
 }
 i--;
 }
// sau khi th?c hi?n ðo?n code trên ta v?n c?n chýa in ra ðc h?t, v?n c?n thi?u 1
 start = 0;
 while (start != end) {// th?c hi?n vong l?p này s? in n?t t? c?n l?i
 res += s[start++];
 }
 cout << res << endl;
 }
 return 0;
}
