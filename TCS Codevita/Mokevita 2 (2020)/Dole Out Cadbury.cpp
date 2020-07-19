#include<bits/stdc++.h>
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long
using namespace std;

int32_t main()
{
	IOS
    int p,q,r,s,cnt=0;
    cin>>p>>q>>r>>s;
    
    for(int i=p;i<=q;i++)
    {
    	for(int j=r;j<=s;j++)
    	{
    		int a=i,b=j;
			while(1)
			{
				int mx,mn;
				mx = max(a,b);
				mn = min(a,b);
				if(mx % mn == 0)
				{
					cnt = cnt + (mx/mn);
					break;
				}
				cnt = cnt + (mx/mn);
				a = mx % mn;
				b = mn;	
			}
		}
	}
	cout<<cnt;
    
    return 0;
}

