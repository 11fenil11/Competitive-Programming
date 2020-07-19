#include<bits/stdc++.h>
using namespace std;

#define int long long
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int32_t main()
{
	IOS
	int t;
	cin>>t;
	for(int tc=0;tc<t;tc++)
	{
		double n,a,b,c,d;
		cin>>n>>a>>b>>c>>d;
//		cout<<"a+b :"<<a+b<<" ->a-b :"<<a-b<<endl;
//		cout<<((c-d)/n)<<" "<<((c-d)/n)<<" "<<((c+d)/n)<<" "<<((c+d)/n);
		if( ((((c-d)/n)<=(a+b)) && (((c-d)/n)>=(a-b)) )|| ((((c+d)/n)<=(a+b)) && (((c+d)/n)>=(a-b))))
		{
			cout<<"YES"<<endl;
		}
		else
		{
			cout<<"NO"<<endl;
		}
	}
	return 0;
}
