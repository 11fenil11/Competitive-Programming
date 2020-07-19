#include<bits/stdc++.h>
#include<vector>
#define int long long
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int32_t main()
{
	int f;
	cin>>f;
	for(int t=0;t<f;t++)
	{
		int x;
		cin>>x;
		int a = x/2 -1;
		int sm1 = (2*((long long)pow(2,a) -1));
//		cout<<"Pre->"<<sm1<<" ";
		int sm2 = (2*((long long)pow(2,x-1)-1))  - sm1;
		sm1 = sm1 + (long long)pow(2,x);
//		cout<<"sm1->"<<sm1<<"   sm2->"<<sm2<<endl;
		cout<<sm1-sm2<<endl;
	}
	return 0;
}
