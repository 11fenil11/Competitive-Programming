#include<bits/stdc++.h>
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long
using namespace std;

int32_t main()
{
	IOS
    int tt;
    cin>>tt;
    for(int tc=0;tc<tt;tc++)
    {
        int n;
        cin>>n;
        vector<int> v;
        for(int i=0;i<n;i++)
        {
        	int x;
        	cin>>x;
        	v.push_back(x);
		}
		
		sort(v.begin(),v.end());
		int cnt=1,ans=1;
		
		for(int i=0;i<n;i++)
		{
			if(v[i]<=cnt)
			{
				ans = cnt+1;
			}
			cnt++;
		}
		cout<<ans<<endl;
    }
    return 0;
}
