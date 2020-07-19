#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#include<map>
using namespace std;

long long int palin(long long n,long long k)
{
	if(n != 0)
	{
		return palin(n/10,(k*10)+(n%10));
	}
	return k;
}


int main()
{
    ios::sync_with_stdio(0);
	cin.tie(0);

    long long int T,cnt=0;
    cin>>T;
    for(long long int tc=0;tc<T;tc++)
    {
        long long int n,ans;
        cin>>n;
        ans = palin(n,0);
        if(ans == n)
        {
        	cnt++;
		}
    }
    cout<<cnt;
    return 0;
}


