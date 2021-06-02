#include <bits/stdc++.h>
using namespace std;
#define ms(s,n) memset(s,n,sizeof(s))
#define all(a) a.begin(),a.end()
#define present(t, x) (t.find(x) != t.end())
#define sz(a) int((a).size())
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define FORd(i, a, b) for (int i = (a) - 1; i >= (b); --i)
#define pb push_back
#define pf push_front
#define fi first
#define se second
#define mp make_pair
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
typedef pair<int,int> pi;
typedef vector<int> vi;
typedef vector<pi> vii;
const int MOD = (int) 1e9+7;
const int INF = (int) 1e9+1;
inline ll gcd(ll a,ll b){ll r;while(b){r=a%b;a=b;b=r;}return a;}
inline ll lcm(ll a,ll b){return a/gcd(a,b)*b;}

string s;
int solve(){
	int n=s.length();
	if(n<3)
		return 0;
	int x=0,y=1,z=2,ans=0;
	while(z<n){
		if(s[x]=='1'&&s[y]=='0'&&s[z]=='0'){
			ans++;
			if(x>=1){
				if(s[x-1]=='1'){
					x=x-1;
					y=z+1;
					z=y+1;
				}
				else{
					x=z+1;
					y=x+1;
					z=y+1;
				}
			}
		}
		else{
			x++;y++;z++;
		}
	}
	return ans*3;
}
int main(){
	int t;cin>>t;
	while(t--){
		cin>>s;
		cout<<solve()<<endl;
	}
}
