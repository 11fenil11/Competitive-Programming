#include<bits/stdc++.h>
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long
using namespace std;

int32_t main()
{
	IOS
    int n,cnt=0;
    cin>>n;
    string b,g;
    cin>>b;
    cin>>g;
    map<char,int> m;
    for(int i=0;i<n;i++)
    {
		m[g[i]]++; 	
	}
	for(int i=0;i<n;i++)
    {
    	if(m[b[i]] > 0 )
    	{
    		m[b[i]]--;
    		cnt++;
		}else
		{
			break;
		}
	}
	cout<<n-cnt;
    return 0;
}

