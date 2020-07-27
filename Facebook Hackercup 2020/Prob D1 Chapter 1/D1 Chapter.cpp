#include<bits/stdc++.h>
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long
using namespace std;

int cnt = 0;

vector<int> res,pres;
void solve(int pos,int m, vector<int> &v)
{
	int end = pos-1+m;
	for(int i=end;i>=pos;i--)
	{
		if(i < v.size()-1)
		{
			cnt = cnt + v[i];
			if(v[i]!= 0)
			{
				pres.push_back(v[i]);
				solve(i+1,m,v);		
			}
		}else if(i == v.size()-1)
		{
			res.push_back(cnt);
			if(res.size()>0)
			{
				cnt = cnt - pres[pres.size()-1];
			}
			break;
		}
	}	
}



int32_t main()
{
	#ifndef ONLINE_JUDGE 
    freopen("InFile.txt", "r", stdin); 
    freopen("OutFile.txt", "w", stdout); 
	#endif 
	IOS
	int T;
	cin>>T;
	for(int t=0;t<T;t++){
		int n,m;
		cin>>n>>m;
	
		vector<int> v;
		for(int i=0;i<n;i++)
		{
			int x;
			cin>>x;
			v.push_back(x);
		}
		solve(1,m,v);
		
		if(res.size()==0)
		{
			cout<<"Case #"<<t+1<<": -1"<<endl;
		}else
		{
			int mn=9223372036854775807;
			for(int i : res)
			{
				mn = min(mn,i); 
			}
			cout<<"Case #"<<t+1<<": "<<mn<<endl;
		}
		res.clear();
		pres.clear();
		cnt=0;
	    
	}
	return 0;
}
