#include<bits/stdc++.h>
#include<vector>
#define int long long
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int32_t main()
{
	int f;
	cin>>f;
	for(int t=0;t<f;t++)
	{
		int n,k;
		cin>>n>>k;
		vector<int> v;
		map<int,int> m;
		for(int i=0;i<n;i++)
		{
			int x;
			cin>>x;
			if(m[x]==0)
			{
				d.push_back(x);
				m[x]=1;
			}
		}
		if(m.size() > k)
		{
			cout<<"-1"<<endl;
		}
		else if(n==m.size())
		{
			for(auto s:m)
			{
				cout<<s.first<<" ";
				v.push_back(s.first);
			}
			for(auto s:m)
			{
				cout<<s.first<<" ";
				v.push_back(s.first);
			}
		}
		else
		{
			int cnt=0;
			for(int j=0;j<(n-m.size()+1);j++)
			{
				for(auto s:m)
				{
					cnt++;
					cout<<s.first<<" ";
					v.push_back(s.first);
				}
				while(cnt<k)
				{
					cnt++;
					cout<<"1"<<" ";
					v.push_back(1);
				}
				cnt=0;
			}
		}
		
	}
	return 0;
}
