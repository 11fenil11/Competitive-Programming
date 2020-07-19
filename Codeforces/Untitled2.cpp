#include<bits/stdc++.h>
#include<map>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int


//bool pairCompare(map<pair<int,int>,int> i,map<pair<int,int>,int> j)
//{
//	return i. < j.second;
//}

int main()
{
	IOS
	ll t;
	cin>>t;
	
	
	map<pair<int,int>,int> m;
	m[{1,2}] = abs(1-2);
	m[{1,3}] = abs(1-3);
	m[{1,4}] = abs(1-4);
	m[{1,5}] = abs(1-5);
	m[{1,6}] = abs(1-6);
	m[{1,7}] = abs(1-7);
	pair<pair<int,int>,int> mi = *m.begin(); 
	cout<<mi.second;
//	map<pair<int,int>,int> mi = *min_element(m.begin,m.end(),pairCompare);
	
//	cout<<"minimum = ("<<mi.first<<","<<mi.second<<")"<<endl;
	return 0;
}
