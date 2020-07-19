#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#include<map>
using namespace std;
 
 
 
int main()
{
    ios::sync_with_stdio(0);
	cin.tie(0);
    long long int a,d,r,f;
    cin>>a>>d;
    
    r = d%a;
    f = d/a;
    cout<<(a + ((r+f-1)/f ));
    
    return 0;
}
