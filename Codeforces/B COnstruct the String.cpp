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
        ll n,a,b;
        cin>>n>>a>>b;
        string str ;
        while(str.length() < n)
        {
        	ll i=0;
        	while(i<b)
        	{
        		if(str.length() != n)
        		{
        			str = str + char(i+97);
//        			cout<<"=>"<<str<<endl;
				}
				i++;	
			}
		}
		cout<<str<<endl;
    }
    return 0;
}
