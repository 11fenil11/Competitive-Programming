#include<bits/stdc++.h>
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long
using namespace std;

int32_t main()
{
	#ifndef ONLINE_JUDGE 
    freopen("File.txt", "r", stdin); 
    freopen("OFile.txt", "w", stdout); 
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
			x = ((al*L[i-2] + bl*L[i-1] + cl)%dl)+1;
			L.push_back(x);
		}
		for(int i=k;i<n;i++)
		{
			int x;
			x = ((ah*H[i-2] + bh*H[i-1] + ch)%dh)+1;
			H.push_back(x);
		}
		int v[L[n-1]+w] = {0};
//		vector<int> v(L[n-1]+w,0);
		int s;
		map<int,int> oLap,m;
		for(int i=0;i<n;i++)
		{
			int sum=0;
			s = L[i];
			for(int j=s; j<=s+w; j++)
			{
				oLap[j]++;
				if(m[j]<H[i])
				{
					m[j] = H[i];
					v[j] = H[i];
				}
			}
			int w1=0;
			
			s = L[0];
			
			sum = v[s];
			for(int j=L[0]; j<L[i]+w; j++)
			{
				int cur = v[j];
				int nxt = v[j+1];
				if(cur!=nxt)
				{
					if(oLap[j+1]>1)
					{
						w1 = j - s	+ 1;
						sum = sum + 2*w1 + abs(nxt-cur);
						s = j+1;
					}else if(oLap[j]>1)
					{
						w1 = j - s;
						sum = sum + 2*w1 + abs(cur-nxt);
						s = j;
					}else
					{
						w1 = j - s;
						sum = sum + 2*w1 + cur + nxt;
						s = j+1;
					}	
				}else if(cur == 0)
				{
					s = j+1;
				}
			}
			w1 = (L[i]+w) - s;
			sum = sum + 2*w1 + H[i];
			p.push_back(sum); 
		}
		
		int res=1;
		for(int i=0; i<p.size();i++)
		{
			res = res * p[i];
			res = res%1000000007;
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
