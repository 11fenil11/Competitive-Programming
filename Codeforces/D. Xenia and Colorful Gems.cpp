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
	    int r,g,b;
	    cin>>r>>g>>b;
	    vector<int> R,G,B;
	    for(int i=0;i<r;i++)
	    {
	    	int x;
	    	cin>>x;
	    	R.push_back(x);
		}
		for(int i=0;i<g;i++)
	    {
	    	int x;
	    	cin>>x;
	    	G.push_back(x);
		}
		for(int i=0;i<b;i++)
	    {
	    	int x;
	    	cin>>x;
	    	B.push_back(x);
		}
		int red,green,blue,minx;
		int limit = 9223372036854775807;
		minx = 9223372036854775807;
		for(int i=0;i<r;i++)
		{
			for(int j=0;j<g;j++)
			{
				for(int k=0;k<b;k++)
				{
					int x;
//					x = abs(R[i]-G[j])+abs(G[j]-B[k])+abs(B[k]-R[i]);
					x = (((R[i]-G[j])*(R[i]-G[j]))+((R[i]-B[k])*(R[i]-B[k]))+((B[k]-G[j])*(B[k]-G[j]))); 
					if(x < minx)
					{
						minx = x;
						red = i;
						green = j;
						blue =k; 
					}
				}
			}
		}
		cout<<(((R[red]-G[green])*(R[red]-G[green]))+((R[red]-B[blue])*(R[red]-B[blue]))+((B[blue]-G[green])*(B[blue]-G[green])))<<endl;
	}
	
	return 0;
}

