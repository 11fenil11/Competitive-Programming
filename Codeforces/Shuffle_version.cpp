#include<iostream>
#include<bits/stdc++.h>
using namespace std;

#define int long long
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int32_t main()
{
	IOS
	int tt;
	cin>>tt;
	for(int tc=0;tc<tt;tc++)
	{
		int s,n;
		cin>>n>>s;
		vector<int> v;
		for(int i=0;i<n;i++)
		{
			int x;
			cin>>x;
			v.push_back(x);
		}
		int min1=LONG_MAX,min2=LONG_MAX;
		for(int i=0;i<n;i++)
		{
			int x;
			cin>>x;
			if(x==1)
			{
				if(min1>v[i])
				{
					min1=v[i];
				}
			}else
			{
				if(min2>v[i])
				{
					min2=v[i];
				}
			}
		}
		if((s+min1+min2) > 100)
		{
			cout<<"no"<<endl;
		}else
		{
			cout<<"yes"<<endl;
		}
	}
	return 0;
}
