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
    	int a,b,c;
    	cin>>a>>b>>c;
    	int x;
    	x = c/b;
    	if(x>=a)
    	{
    		cout<<"1 -1"<<endl;
		}else if(c<=a && b==1)
		{
			cout<<"-1 -1"<<endl;
		}else if(c<=a && b>1)
		{
			cout<<"-1 "<<b<<endl;	
		}else if(a>x && a<b)
		{
			cout<<"1 "<<b<<endl;
		}
		else if(a>x && a<=b)
		{
			cout<<"1 "<<b<<endl;
		}
		else
		{
			cout<<"-1 "<<b<<endl;
		}
    }
    return 0;
}
