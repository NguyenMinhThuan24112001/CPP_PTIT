#include<bits/stdc++.h>
#include<string.h>
using namespace std;
long long j = 0, dem = 0;
long long a[10000] = {0};
void snt(long long n)
{
	long long x = n;
	j = 0;
	for ( long long i = 2; i<= sqrt(x); i++ )
		{
			while(x % i == 0)
			{
				x /= i;
				a[j++] = i;
				dem ++ ;
			}
		}
	if (x > 1)
	{
		dem ++;
		a[j++] = x;
		return ;
		}
}
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		long long n, k;
		cin >> n >> k;
		snt(n);
		if (k > dem)
			cout << "-1" << endl;
		else cout << a[k-1] << endl;
	}
	return 0;
}
