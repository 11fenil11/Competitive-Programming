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
        if(n%2==0)
        {
            cout<<(n/2)-1<<endl;
        }else
        {
            cout<<(n/2)<<endl;
        }
    }
    return 0;
}
