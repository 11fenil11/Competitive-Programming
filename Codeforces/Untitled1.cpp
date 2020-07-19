#include <iostream>
#include<cmath>
#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long

int32_t main()
{
	IOS
	int T;
	cin>>T;
	for(int t=0;t<T;t++)
	{
	    int a,b,c;
	    cin>>a>>b>>c;
        int x = c;
        for(int i=c; i>=0;i--)
        {
            if(i % a == b)
            {
                x = i;
                break;
            }
        }
        
        int ans = ((c/a)*a)+b;
        cout<<"New->"<<ans;
	    cout<<x<<endl;
	}
	
	return 0;
}

