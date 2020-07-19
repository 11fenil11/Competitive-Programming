#include<bits/stdc++.h>
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long
using namespace std;

void maxCircularSum(vector<int> &arr, int n, int k) 
{ 
    int sum = 0, start = 0, end = k - 1; 
  
    // calculate the sum of first k elements. 
    for (int i = 0; i < k; i++) { 
        sum += arr[i]; 
    } 
  
    int ans = sum; 
  
    for (int i = k; i < n + k; i++) { 
  
        // add current element to sum 
        // and subtract the first element 
        // of the previous window. 
        sum += arr[i % n] - arr[(i - k) % n]; 
  
        if (sum > ans) { 
            ans = sum; 
            start = (i - k + 1) % n; 
            end = i % n; 
        } 
    } 
  
    cout<<ans<<endl; 
} 


int32_t main()
{
	IOS
    int n,x;
    cin>>n>>x;
    vector<int> v,p;
    for(int i=0;i<n;i++)
    {
    	int x;
    	cin>>x;
    	v.push_back(x);
    	int y = 1;
		while(y<=v[i])
		{
			p.push_back(y);
			y++;
		}
	}
	maxCircularSum(p,p.size(),x);
    return 0;
}

