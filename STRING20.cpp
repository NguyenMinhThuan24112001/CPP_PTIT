#include<iostream>
using namespace std;
int main() {
 long long t; cin >> t;
 cin.ignore();// ch� ? d?ng n�y, n?u ko c� b?n s? ko nh?p �c b? test ti?p theo
 while (t--) {
 long long start;
 string s;// chu?i ban �?u
 getline(cin, s);
 long long i = s.size() - 1;
 string res = "";// kh?i t?o chu�? �? x? l?
 long long end = s.size();// kh?i t?o gi� tr? k?t th�c c?a vong l?p
 while (i >= 0) {
 if (s[i] == ' ') {// t?m k? t? kho?ng tr?ng �?u ti�n
 start = i + 1;// sau khi x�c �?nh v? tr� c?a kho?ng tr?ng, ta s? l?y �c 1 t?
 while (start != end) {// th?c hi?n vong l?p �? l?y t?ng t? c?a chu?i m?
 res += s[start++];// c?ng t?ng k? t? c?a s t? kho?ng tr?ng cho �?n h?t
 }
 res += " ";// c?ng kho?ng tr?ng sau khi l?y ��?c 1 t?
 end = i;// �?t bi?n k?t thuc vong l?p b?ng v? tr� kho?ng tr?ng tr�?c ��
 }
 i--;
 }
// sau khi th?c hi?n �o?n code tr�n ta v?n c?n ch�a in ra �c h?t, v?n c?n thi?u 1
 start = 0;
 while (start != end) {// th?c hi?n vong l?p n�y s? in n?t t? c?n l?i
 res += s[start++];
 }
 cout << res << endl;
 }
 return 0;
}
