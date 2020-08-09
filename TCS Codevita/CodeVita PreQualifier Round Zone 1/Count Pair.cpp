#include<bits/stdc++.h>
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long
using namespace std;

int32_t main()
{
	IOS
	int n,k,cnt=0;cin>>n>>k;
	vector<int> v;
	map<int,int> m,f;
	for(int i=0;i<n;i++)
	{
		int x;cin>>x;
		v.push_back(x);
		m[x] = 1;
	}
	for(int i=0;i<n;i++)
	{
		if(f[v[i]]==1)
		{
			cnt++;
		}else
		{
			for(int j=v[i]-k;j<=v[i]+k;j++)
			{
				if(m[j]==1 && j!=v[i])
				{
					f[j] = 1;
					f[v[i]]	= 1;	
					cnt++;
					break;
				}
			}	
		}
		
	}
	cout<<cnt<<endl;
	return 0;
}
