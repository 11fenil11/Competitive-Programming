#include<bits/stdc++.h>
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long
using namespace std;

int32_t main()
{
	IOS

	int T;
	cin>>T;
	for(int t=0;t<T;t++)
	{
		int n,c;
		cin>>n>>c;
		if((c<n-1) || (c>((n*(n+1))/2)-1))
		{
			cout<<"Case #"<<t+1<<": IMPOSSIBLE"<<endl;
		}else if(c==n-1)
		{
			cout<<"Case #"<<t+1<<":";
			for(int kp=0;kp<n;kp++)
			{
				cout<<" "<<kp+1;
			}
			cout<<endl;
		}else
		{
			int bk = n-1;
			int cnt=0;
			int vcnt=0;
			int cr=0;
			int clk=0;
			vector<int> v;
			vector<int> v_index;
			for(int ii=0; ii<n ; ii++)
			{
				v_index.push_back(ii);
				v.push_back(0);
			}
			for(int i = n ; i>0 ; i--)
			{
				int tms = 1;
				int nks = 0;
				if(i==1)
				{
					tms = c;
				}
				while((nks < tms) && (bk>0))
				{
					bk = bk - 1;
					if(bk + i + cnt <= c)
					{
						clk++;
						
						cnt = cnt + i;
						vcnt++;		
						
						v[cr+i-1] = vcnt;
						reverse(v.begin()+cr,v.begin()+cr+i);
						reverse(v_index.begin()+cr,v_index.begin()+cr+i);
						
						cr++;	
					}else
					{
						bk = bk + 1;
						nks = tms + 1;
					}	
					nks++;
				}
			}
			cout<<"Case #"<<t+1<<":";
			int res[n];
			for(int iend=0;iend<v.size();iend++)
			{
				if(v[iend]!=0)
				{
					res[v_index[iend]] = v[iend];
				}else
				{
					res[v_index[iend]] = n;
				}
			}
			for(int i=0;i<n;i++)
			{
				cout<<" "<<res[i];
			}
			cout<<endl;
		}
	}
	return 0;
}
