#include<bits/stdc++.h>
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long
using namespace std;

int gcd(int a, int b) 
{ 
    if (b == 0) 
    {
    	return a; 
	}
    return gcd(b, a % b); 
} 
  
int lcm(vector<int> &val, int n) 
{ 
    int ans = val[0]; 
	for (int ii = 1; ii < n; ii++)
	{
	    ans = (((val[ii] * ans)) / (gcd(val[ii], ans))); 
	} 
    return ans; 
} 


int32_t main()
{
	IOS
   	int tt;
   	cin>>tt;
   	for(int tc=0; tc<tt; tc++)
    {
    	int n;
    	cin>>n;
		vector<int> v,val;
		map<int,int> m;
    	v.push_back(0);
    	for(int i=0;i<n;i++)
    	{
    		int x;
    		cin>>x;
    		v.push_back(x);
		}
		for(int i=1;i<=n;i++)
		{
//			cout<<i<<" -> "<<m[i];
			if(m[i]!=1)
			{
				m[i] = 1;
				int x = v[i];
				int cnt = 1;
				while(x != i)
				{
					m[x] = 1;
//					cout<<" -> "<<x;
					x = v[x];
					cnt++;				
				}
//				cout<<"CNT -> "<<cnt<<endl;
				val.push_back(cnt);	
			}
//			cout<<endl;
		}
		cout<<lcm(val,val.size())<<endl;
	}
    return 0;
}

