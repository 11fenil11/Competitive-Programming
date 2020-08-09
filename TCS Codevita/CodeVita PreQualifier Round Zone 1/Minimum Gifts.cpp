#include<bits/stdc++.h>
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long
using namespace std;

int32_t main()
{
	IOS
	int T;
	cin>>T;
	for(int t=0;t<T;t++)
	{
		int n;
		cin>>n;
		int swt=3,cnt=1,sum=0,up=1,dn=1;
		vector<int> v;
		vector<int> rs(n);
		for(int i=0;i<n;i++)
		{
			int x;
			cin>>x;
			v.push_back(x);
		}
		int y = 0;
		rs[0]=1;
		for(int i=1;i<n;i++)
		{
			if(swt == 3)
			{
				if(v[i]>v[i-1])
				{
					y = i-1;
					swt = 1;
					up++;
					rs[i]=rs[i-1]+1;
				}else if(v[i]<v[i-1])
				{
					y = i-1;
					swt = 0;
					dn++;
					rs[i]=1;
					if(i==n-1)
					{
						rs[y] = max(rs[y],dn);
						for(int k=y+1;k<=i;k++)
						{
							if(v[k]!=v[k-1])
							{
								dn=dn-1;
							}							
							rs[k] = dn;
						}
					}
				}else
				{
					swt = 3;
					rs[i]=rs[i-1];
				}
			}else if(swt == 1)
			{
				if(v[i]>v[i-1])
				{
					up++;
					rs[i]=up;
				}else if(v[i]<v[i-1])
				{
					rs[i]=up;
					if(i==n-1)
					{
						rs[i]=1;
					}
					swt = 0;
					up=1;
					dn++;
					y = i-1;
				}else
				{
					rs[i]=up;
				}
			}else if(swt == 0)
			{
				if(v[i]<v[i-1])
				{
					dn++;
					if(i==n-1)
					{
						rs[y] = max(rs[y],dn);
						for(int k=y+1;k<=i;k++)
						{
							if(v[k]!=v[k-1])
							{
								dn=dn-1;
							}							
							rs[k] = dn;
						}
					}
				}else if(v[i]>v[i-1])
				{
					rs[y] = max(rs[y],dn);
					for(int k=y+1;k<i;k++)
					{
						if(v[k]!=v[k-1])
						{
							dn=dn-1;	
						}
						rs[k] = dn;
					}
					swt = 1;
					dn = 1;
					up++;
					rs[i] = up;
				}else if(v[i]==v[i-1])
				{
					rs[i] = rs[i-1];
					if(i==n-1)
					{
						rs[y] = max(rs[y],dn);
						for(int k=y+1;k<=i;k++)
						{
							if(v[k]!=v[k-1])
							{
								dn=dn-1;
							}							
							rs[k] = dn;
						}
					}
				}
			}
		}
		for(auto x : rs)
		{
			sum = sum + x;
		}
		cout<<sum<<endl;
	}
	return 0;
}
