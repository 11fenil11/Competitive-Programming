#include<bits/stdc++.h>
#include<string>
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long
using namespace std;

int32_t main()
{
	IOS
	vector<int> v,va,vb;
	string str,ns="";
	getline(cin,str);
	
	for(char x : str)
	{
		if(x == ' ')
		{
			v.push_back(stoi(ns));
			ns = "";
		}else
		{
			ns = ns + x;
		}
	}
	v.push_back(stoi(ns));
	int a=0,b=0;
	sort(v.begin(),v.end(),greater<int>());
//	sort(v.begin(),v.end());	
	for(int i=0;i<v.size();i++)
	{
		cout<<v[i]<<" ";
	}
	cout<<endl;
	for(int i=0;i<v.size();i++)
	{
		if(a<b)
		{
			a = a + v[i];
		}
		else
		{
			b = b + v[i];
		}
	}
	cout<<a<<" "<<b;
    return 0;
}

