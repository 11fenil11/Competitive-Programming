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
        vector<int>a,b;
        for(int i=0;i<n;i++)
        {
        	int x;
        	cin>>x;
        	a.push_back(x);
		}
		for(int i=0;i<n;i++)
        {
        	int x;
        	cin>>x;
        	b.push_back(x);
		}
		sort(a.begin(),a.end());
		sort(b.begin(),b.end(),greater<int>());
		int i=0,j=0;
		while(m>0)
		{
			if(b[i]>a[j])
			{
				int tmp = b[i];
				b[i] = a[j];
				a[j] = tmp;
				i++;
				j++;
			}else
			{
				break;
			}
			m--;
		}
		int sum=0;
		for(int i=0;i<n;i++)
		{
			sum = sum + a[i];
		}
		cout<<sum<<endl;
    }
    return 0;
}
