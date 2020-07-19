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
    	string str;
    	cin>>str;
    	int res = 0;
    	for(int i = 0; i>= 0 ; i++)
    	{
    		int cur = i;
			int ok = 1;
			for(int j=0;j<str.length();j++)
			{
				res = res + 1;
				if(str[i] == '+')
				{
					cur = cur + 1;	
				}else
				{
					cur = cur - 1;	
				}	
				if(cur<0)
				{
					ok = 0;
					break;
				}
			}
			if(ok==1)
			{
				break;	
			}	
		}
		cout<<res<<endl;
    }
    return 0;
}
