#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long

void solv(vector<vector<char> > &res,int i, int j)
{
	if(i<j)
	{
		if(res[i][j-1] == 'Y' && res[j-1][j] == 'Y')
		{
			res[i][j] = 'Y';
		}
	}else
	{
		if(res[i][i-1] == 'Y' && res[i-1][j] == 'Y')
		{
			res[i][j] = 'Y';
		}
	}
}


int32_t main()
{
	#ifndef ONLINE_JUDGE 
    freopen("input.txt", "r", stdin); 
    freopen("output.txt", "w", stdout); 
	#endif 
	IOS
	int T;
	cin>>T;
	for(int t=0;t<T;t++)
	{
		int n,cnt=0;
		cin>>n;
		vector<char> in,op;
		
		for(int i=0;i<n;i++)
		{
			char x;
			cin>>x;
			in.push_back(x);
		}
		for(int i=0;i<n;i++)
		{
			char x;
			cin>>x;
			op.push_back(x);
		}
		vector<vector<char> > res(n);
		
		for(int i=0;i<n;i++)
		{
			res[i].resize(n);
			for(int j=0;j<n;j++)
			{
				if(abs(i-j) == 0)
				{
					res[i][j] = 'Y';
				}else if(abs(i-j) == 1 && (op[i]=='Y' && in[j]=='Y'))
				{
					res[i][j] = 'Y';
				}else
				{
					res[i][j] = 'N';
				}
			}
		}
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				if(abs(i-j)>1 && res[i][j]=='N')
				{
					solv(res,i,j);
				}
			}
		}
		
	    cout<<"Case #"<<t+1<<": "<<endl;
	    for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				cout<<res[i][j];
			}
			cout<<endl;
		}
	}
	return 0;
}
