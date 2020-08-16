#include<bits/stdc++.h>
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long
using namespace std;

int32_t main()
{
	#ifndef ONLINE_JUDGE 
    freopen("1_File.txt", "r", stdin); 
    freopen("1_FinalOutFile.txt", "w", stdout); 
	#endif 
	IOS
	int T;
	cin>>T;
	for(int t=0;t<T;t++){
		int n,k,w;
		cin>>n>>k>>w;
		vector<int> L,H,p;
		int al,bl,cl,dl,ah,bh,ch,dh;
		
		for(int i=0;i<k;i++)
		{
			int x;cin>>x;
			L.push_back(x);
		}
		cin>>al>>bl>>cl>>dl;
		
		for(int i=0;i<k;i++)
		{
			int x;cin>>x;
			H.push_back(x);
		}
		cin>>ah>>bh>>ch>>dh;
		
		for(int i=k;i<n;i++)
		{
			int x;
			x = (( (((al%dl) * (L[i-2]%dl))%dl) + (((bl%dl) * (L[i-1]%dl))%dl) + (cl%dl) )%dl)+1;
			L.push_back(x);
		}
		for(int i=k;i<n;i++)
		{
			int x;
			x = (( (((ah%dh) * (H[i-2]%dh))%dh) + (((bh%dh) * (H[i-1]%dh))%dh) + (ch%dh) )%dh)+1;
			H.push_back(x);
		}
		
		
//		int v[L[n-1]+w] = {0};
		vector<int> v(L[n-1]+w,0);
		int sum = 2*w + 2*H[0];
		int endOld,endNew,hmax;
		endOld = L[0]+w;
		hmax = H[0];
		p.push_back(sum);
		
		for(int i=L[0];i<=L[0]+w;i++)
		{
			v[i] = H[0];
		}		
		for(int i=1;i<n;i++)
		{
			hmax = v[L[i]];
			endNew = L[i]+w;
			if((endNew - endOld) <= w)
			{
				if(H[i]>=hmax)
				{
					sum = sum + 2*(H[i]-hmax) + 2*(endNew - endOld);
					hmax = H[i];
				}else
				{
					sum = sum + 2*(endNew - endOld);
				}
			}else
			{
				sum = sum + 2*H[i] + 2*w;
				hmax = H[i];
			}
			endOld = endNew;
			p.push_back(sum);
			for(int j=L[i];j<=L[i]+w;j++)
			{
				if(v[j]<H[i])
				{
					v[j]=H[i];
				}
			}
		}
		int res=1;
		for(int i=0; i<p.size();i++)
		{
			res = ((res) * (p[i]%1000000007) )%1000000007;
		}
	    cout<<"Case #"<<t+1<<": "<<res<<endl;
	}
	return 0;
}

/*
2
5 3
2 4 5 9 12
4 3 6 3 2

10 8
9 14 15 19 23 27 31 35 39 43
12 7 16 31 30 27 16 17 2 15
*/

/*
1
2 2 2
10 20
0 0 0 100
3 3
0 0 0 100
*/

/*
1
200000 2 20
1 3
0 1 100 500000000
100000000 300000000
0 1 100 500000000
*/
