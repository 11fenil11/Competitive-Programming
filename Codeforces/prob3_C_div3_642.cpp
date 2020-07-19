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
        
		int sum=0,k=8;
		for(int i=1;i<=n/2;i++)
		{
			sum = sum + i*8*i;
		}
		cout<<sum<<endl;
    }
    return 0;
}
