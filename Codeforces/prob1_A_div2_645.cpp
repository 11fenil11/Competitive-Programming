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
        int n,m;
        cin>>n>>m;
        if((n*m)%2==0)
        {
            cout<<(n*m)/2<<endl;
        }else
        {
            cout<<((n*m)+1)/2<<endl;
		}
    }
    return 0;
}
