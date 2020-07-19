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
        int n,m,k;
        cin>>n>>m>>k;
        if((n/k) >= m)
        {
        	cout<<m<<endl;
		}
		else if((m-(n/k)) <= ((k-2)*(n/k)) )
		{
			cout<<n/k<<endl;
		}else
		{
			cout<<(m) - ((m-(n/k))%n)<<endl;
		}
    }
    return 0;
}
