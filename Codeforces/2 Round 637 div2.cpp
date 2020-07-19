#include<bits/stdc++.h>
using namespace std;

#define int long long
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int32_t main()
{
	IOS
	int t;
	cin>>t;
	for(int tc=0;tc<t;tc++)
	{
		int n,k;
		cin>>n>>k;
		int a[n+1];
		for(int i=1;i<=n;i++)
		{
			cin>>a[i];
		}
		int ans=0,idx;
		for(int i=1;i<=n-k+1;i++)
		{
			int cnt=0;
			for(int j=i+1;j<i+k-1;j++)
			{
				if(a[j]>a[j-1] && a[j]>a[j+1])
				{
					cnt++;
				}
			}
			if(ans<cnt)
			{
				ans = cnt;
				idx = i;
			}
		}
		cout<<ans+1<<" "<<idx<<endl;
	}
	return 0;
}
