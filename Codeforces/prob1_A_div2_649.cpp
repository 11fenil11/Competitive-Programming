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
    	int n,x,sum=0;
    	cin>>n>>x;
    	vector<int> a;
    	for(int i=0;i<n;i++)
    	{
    		int z;
    		cin>>z;
    		a.push_back(z);
			sum = sum +z;
		}
		int pre = sum;
		int pos = sum,f_cnt=-1,l_cnt=-1;
		for(int i=0;i<n;i++)
		{
			if(pre%x != 0)
			{
				f_cnt = n-i;
				break;
			}
			pre = pre - a[i];
		}
		for(int i=n-1;i>=0;i--)
		{
			if(pos%x != 0)
			{
				l_cnt = i+1;
				break;
			}
			pos = pos - a[i];
		}
		cout<<max(f_cnt,l_cnt)<<endl;
    }
    return 0;
}
