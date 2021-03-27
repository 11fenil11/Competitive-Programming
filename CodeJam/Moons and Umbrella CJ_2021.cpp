#include<bits/stdc++.h>
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long
using namespace std;

int32_t main()
{
	IOS

	int T;
	cin>>T;
	for(int t=0;t<T;t++)
	{
		int cj,jc,cnt=0;
		cin>>cj>>jc;
		string str,new_str="";
		cin>>str;
		for(int i=0;i<str.size();i++)
		{
			if(str[i]!='?')
			{
				new_str = "" + new_str +	str[i];	
			}
		}
		if(new_str.size()>1)
		{
			for(int i=0;i<new_str.size()-1;i++)
			{
				string tmp;
				tmp = new_str.substr(i,2);
				if(tmp == "CJ")
				{
					cnt = cnt + cj;
				}else if(tmp == "JC")
				{
					cnt = cnt + jc;
				}
			}	
		}
		
		cout<<"Case #"<<t+1<<": "<<cnt<<"\n";   
	}
	return 0;
}

