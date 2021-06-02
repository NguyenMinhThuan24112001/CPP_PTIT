#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while (t--)
	{
		int n,k,dem=0;
		cin>>n>>k;
		int a[n];
		for (int i=0; i<n; i++) cin>>a[i];
		vector<int> v;
		for (int i=0; i<n; i++)
		{
			for (int j=i+1; j<n; j++)
			{
				int x= abs(a[j]-a[i]);
				v.push_back(x);
			}
		}
		for (int i=0; i<v.size(); i++)
		{
			if (v[i]<k)dem++;
		}
		cout<<dem<<endl;
	}
	return 0;
}
