#include <bits/stdc++.h>
using namespace std;
int ToNum(char c)    
{
    return c - '0';
}
 char ToString(int n)  
{
    return (char)(n+48);
}

void solve(string &a, string &b) 
{
    int s1 = a.length(), s2 = b.length();
    if (s1 >= s2)
    {
        b.insert(0, s1-s2, '0'); 
    }
    else
    {
        a.insert(0, s2-s1, '0');   
    }
}
 
string sum(string a, string b)  
{
    string s = "";
    solve(a,b);    
    int l = a.length();
     
    int tam = 0;
    for (int i=l-1; i>=0; i--)  
    {
        tam = ToNum(a[i]) + ToNum(b[i]) + tam; 
        s.insert(0,1,ToString(tam%10));       
        tam = tam/10; 
    }
    if (tam>0)
    {
        s.insert(0,1,ToString(tam));
    } 
    return s;
}

string mul(char a, string b)    
{
    string s = "";
    int tam = 0;
    for (int i=b.length()-1; i>=0; i--)      
    {
        tam = ToNum(a) * ToNum(b[i]) + tam;
        s.insert(0,1,ToString(tam%10));
        tam = tam/10;
    }
     
    if (tam>0)
    {
        s.insert(0,1,ToString(tam));
    } 
    return s;
}
 
string multi(string a, string b)    
{
    string s = "";
    int l = a.length();
    string s1[l];
     
    for (int i=l-1; i>=0; i--)   
    {
        s1[i] = mul(a[i], b);   
        s1[i].insert(s1[i].length(), l-i-1, '0');   
        s = sum(s, s1[i]);  
    }
    return s;
}
 
int main()
{
    string a, b, s;
    int t;
    cin >> t;
    fflush(stdin);
    while(t--){
    	cin >> a;
	    cin >> b;
	     
	    s = multi(a,b);
	    cout<<s<<endl;
	}
    return 0; 
}
