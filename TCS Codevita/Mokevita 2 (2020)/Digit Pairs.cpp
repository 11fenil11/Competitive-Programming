#include<bits/stdc++.h>
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long
using namespace std;

int32_t main()
{
	IOS
    int n,cnt=0;
    cin>>n;
	vector<int> v;
	map<int,int> m,z,cp;
	for(int i=0;i<n;i++)
	{
		int x,a,b,c,mx,mn,ans;
		cin>>x;
		a = x % 10;
		b = (x/10) % 10;
		c = (x/100);
		mx = max(a,max(b,c));
		mn = min(a,min(b,c));
//		cout<<"Max :"<<mx<<" Min:"<<mn<<" ";
		ans = (mx*11 + mn*7) % 100 ;
//		cout<<ans<<endl;
		v.push_back(ans);
	}
	for(int i=0;i<n;i=i+2)
	{
		m[v[i]/10]++;
	}
	for(auto x : m)
	{
		cout<<x.first<<" -> "<<x.second<<endl;
		if(cp[x.first]<2)
		{
			if(x.second == 2)
			{
				cp[x.first]++;
				cnt++;
			}else if(x.second > 2)
			{
				cnt = cnt + 2;
				cp[x.first] = 2;
			}
		}
	}
	
	for(int i=1;i<n;i=i+2)
	{
		z[v[i]/10]++;
	}
	for(auto x : z)
	{
		cout<<x.first<<" -> "<<x.second<<endl;
		if(cp[x.first]<2)
		{
			if(x.second == 2)
			{
				cp[x.first]++;
				cnt++;
			}else if(x.second > 2)
			{
				cnt = cnt + 2;
				cp[x.first] = 2;
			}
		}
		
	}
	cout<<cnt;
	return 0;
}

