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
        vector<int> v(n);
        fill(v.begin(), v.end(), 0);
        
        if(v.size()%2 == 1)
        {
        	v[(v.size()-1)/2] = 1;
		}else
		{
			v[(v.size()-2)/2] = 1;
		}
		for(int i=1;i<v.size()-1;i++)
        {
        	int l,r,sz=0,x,y;
        	r = v.size()-1;
        	l = v.size()-1;
			for(int j=v.size()-1;j>=0;j--)
        	{
        		if(v[j]!=0 || j==0)
        		{
        			if((r-l)>=sz)
        			{
        				x = l+1;
	        			y = r;
						sz = y-x;	
					}
        			r = j-1;
				}
				l--;
			}
			if((y-x+1)%2 == 1)
			{
				v[(x+y)/2] = i+1;
			}else
			{
				v[(x+y-1)/2] = i+1;
			}
			cout<<"->";
			for(int x:v)
			{
				cout<<" "<<x;
			}
			cout<<endl;
		}
		v[v.size()-1]=v.size();
		cout<<"Final->";
		for(int x:v)
		{
			cout<<" "<<x;
		}
		cout<<endl;
        
    }
    return 0;
}
