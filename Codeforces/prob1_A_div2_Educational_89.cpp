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
        int a,b,ans;
        cin>>a>>b;
        if(a>=2*b || 2*a<=b)
        {
        	ans = min(a,b);
		}else if(a==b){
			ans = 2*(a/3) + ((2*(a%3))/3);
		}else
		{
			ans = (a+b)/3;
		}
		cout<<ans<<endl;
    }
    return 0;
}
