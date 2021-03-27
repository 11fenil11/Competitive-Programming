#include<bits/stdc++.h>
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long
using namespace std;

int32_t main()
{
	IOS
	
	int T;
	cin>>T;
	for(int t=0;t<T;t++){
		int n,cnt=0;
		cin>>n;
		vector<int> v;
		for(int i=0;i<n;i++)
		{
			int x;
			cin>>x;
			v.push_back(x);
		}		
		vector<int> vl;
		for(int i=0;i<n-1;i++)
		{
			int j = i;
			int min = v[i];
			for(int ko = i ; ko<n; ko++)
			{
				if(v[ko] <= min)
				{
					min = v[ko];
					j = ko;
				}
			}
			int i_tmp = i;
			vl = v;
			cnt = cnt + (j-i+1);  
			for(int k=j;k>=i;k--)
			{
				v[i_tmp] = vl[k];
				i_tmp++;
			}
		}
	    cout<<"Case #"<<t+1<<": "<<cnt<<"\n";   
	}
	return 0;
}
