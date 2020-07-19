#include<bits/stdc++.h>
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long
using namespace std;

bool isPowerOfTwo(int n) 
{ 
    return (ceil(log2(n)) == floor(log2(n))); 
} 

int32_t main()
{
	IOS
    int tt;
    cin>>tt;
    for(int tc=0;tc<tt;tc++)
    {
    	int n,sm=0;
    	cin>>n;
    	vector<int> arr;
    	for(int i=0;i<n;i++)
    	{
    		int x;
    		cin>>x;
    		arr.push_back(x);
    		sm = sm + x;
		}
		int  count = pow(2,n);
		int aww[count][n];
		int mx=0,lng=0,chk=count-1;
		for (int i = 0; i < count; i++)
		{
			if(!isPowerOfTwo(i))		
			{
				int k=0,sum=0;
				for (int j = 0; j < n; j++)
				{
					if ((i & (1 << j)) > 0)
					{
						aww[i][k] = arr[j];
						k++;
					}			
				}
				for(int ps = 0;ps<k-1;ps++)
				{
					sum = sum + abs(aww[i][ps] - aww[i][ps+1]);
				}	
				if(sum>mx)
				{
					chk = i;
					mx = sum;
					lng = k;
				}else if(sum==mx && k<lng)
				{
					chk = i;
					mx = sum;
					lng = k;
				}
			}
		}
		cout<<lng<<endl;
		for(int iit=0;iit<lng;iit++)
		{
			cout<<aww[chk][iit]<<" ";
		}
		cout<<endl;
    }
    return 0;
}
