#include<bits/stdc++.h>
#include<math.h>
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//#define int long long
using namespace std;

int32_t main()
{
	IOS
	int n,k;
	cin>>n>>k;
	vector<double> v;
	for(int i=0;i<n;i++)
	{
		double x;
		cin>>x;
		v.push_back(x);
	}
	for(int i=0;i<k;i++)
	{
		sort(v.begin(),v.end());
		v[v.size()-1] = floor(v[v.size()-1]/2);
	}
	double s=0;
	for(int i=0;i<n;i++)
	{
		s = s + v[i];
	}
	cout<<s<<endl;
    return 0;
}
