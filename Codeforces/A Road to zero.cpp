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
		
		int ans,x,y,a,b;
		cin>>x>>y;
		cin>>a>>b;
		if(b<=a)
		{
			ans = b*max(x,y);
		}
		else
		{
			ans = min( min(x,y)*b + (max(x,y)-min(x,y))*a , (x+y)*a);
		}
		cout<<ans<<endl;
	}
	return 0;
}
