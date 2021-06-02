#include<bits/stdc++.h>
#include<string>
using namespace std;
string subtraction(string a,string b){
 string res="";
 while(b.size()<a.size()) b.insert(0,"0");
 if(a<b) swap(a,b);
// cout<<a<<endl<<b<<endl;
 int borrow=0;
 for(int i=a.size()-1;i>=0;i--){
 int temp=a[i]-b[i]-borrow;
 if(temp<0){
 temp+=10;
 borrow=1;
 }
 else borrow=0;
 res=(char)(temp%10+48)+res;
 }
 while(res.length()>1&&res[0]=='0'&&res[1]=='0') res.erase(0,1);
 return res;
}
int main(){
 int n;
 cin>>n;
 while(n--){
 string a,b;
 cin>>a>>b;
 if(a.size()<b.size()) swap(a,b);
 cout<<subtraction(a,b)<<endl;
 }
}
