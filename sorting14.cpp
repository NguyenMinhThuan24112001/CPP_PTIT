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

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int m=1000,M=-1;
		bool b[1001];
		memset(b,false,sizeof(b));
		for(int i=0;i<n;i++){
			int x;
			cin>>x;
			m=min(m,x);
			M=max(M,x);
			b[x]=true;
		}
		int cnt=0;
		for(int i=m;i<=M;i++){
			if(b[i]==false){
				cnt++;
			}
		}
		cout<<cnt<<endl;
	}
}
