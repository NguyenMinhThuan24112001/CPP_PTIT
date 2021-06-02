#include<iostream>
#include<algorithm>
using namespace std;
int a[1001];
int main(){
	int t,n; cin >> t;
	while(t--){
		cin >> n;
		for (int i=1;i<=n;i++) cin >> a[i];
		sort(a,a+n+1);
		int x=1,y=(n%2==0)?(n/2+1):(n/2+2);
		for (int i=1;i<=n;i++){
			if (i%2==0) cout << a[y++] << " ";
			else cout << a[x++] << " ";
		}
		cout << endl;
	}
}
