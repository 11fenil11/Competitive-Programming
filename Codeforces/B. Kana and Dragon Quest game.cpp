#include <iostream>
#include<cmath>
#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long

int32_t main()
{
	IOS
	int T;
	cin>>T;
	for(int t=0;t<T;t++)
	{
	    int x,n,m;
	    cin>>x>>n>>m;
	    if(x>=20)
	    {
	    	for(int i=0;i<n;i++)
	        {
	        	if(x>20)
	        	{
	        		x = (x/2)+10;
				}
				else
				{
					break;
				}
			}
			x = x - (m*10);
			if(x<=0)
			{
				cout<<"YES"<<endl;
			}else
			{
				cout<<"NO"<<endl;
			}	
		}
		else
		{
			x = x - (m*10);
			if(x<=0)
			{
				cout<<"YES"<<endl;
			}else
			{
				cout<<"NO"<<endl;
			}
		}
        
	}
	
	return 0;
}

