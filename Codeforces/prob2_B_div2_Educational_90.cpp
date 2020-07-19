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
    	map<char,int> a;
    	for(int i=0;i<str.length();i++)
    	{
    		a[str[i]]++; 
		}
		int x;
    	if(a['1']==a['0'] )
    	{
    		x = a['1'];
		}else
		{
			x = min(a['1'],a['0']);
		}
    	
    	if(x%2 == 1)
    	{
    		cout<<"DA"<<endl;
		}else
		{
			cout<<"NET"<<endl;
		}
    }
    return 0;
}
