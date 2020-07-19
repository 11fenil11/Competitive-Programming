#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int

int main()
{
    IOS
    ll T;
    cin>>T;
    for(ll t=0;t<T;t++)
    {
        ll n;
        cin>>n;
        map<ll,ll> m;
	        
		for(ll i=0;i<n;i++)
        {
        	ll x;
        	cin>>x;
        	m[x] = m[x] + 1;
		}
        if(n<2)
        {
        	cout<<"0"<<endl;
		}
        else
        {
			ll amax = 0;
			for(auto z : m)
			{
				if(z.second >= amax)
				{
					amax = z.second;
				}
			}
//	        cout<<"Distinct = "<<m.size()<<" || max element->  "<<amax-1<<endl;
	        ll s1=m.size();
	        ll s2 = amax-1;
	        if(s1==1 || )
				if(s1<=s2)
		        {
		        	cout<<s1<<endl;	
				}
				else
				{
					cout<<s2<<endl;
				}
//			cout<<"Result---->"<<s1<<" -----  "<<s2<<endl;
		}
		
    }
    return 0;
}
