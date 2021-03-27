#include<iostream>
#include<bits/stdc++.h>
#include<math.h>

using namespace std;

int main()
{
	int times,i,j,k,temp,pointer=4,N,Q;
	cin>>times>>N>>Q;
	vector<vector<int> >answer;
	for(k=0;k<times;k++)
	{
		vector<int>a;
		cout<<"1 2 3\n";
		cin>>temp;
		if(temp == 1)
		{
			a.push_back(2);
			a.push_back(1);
			a.push_back(3);
		}
		else if(temp == 2)
		{
			a.push_back(1);
			a.push_back(2);
			a.push_back(3);
		}
		else
		{
			a.push_back(1);
			a.push_back(3);
			a.push_back(2);
		}
		while(a.size()!=N)
		{
			cout<<pointer<<" "<<a.at(a.size()-1)<<" "<<a.at(a.size()-2)<<"\n";
			cin>>temp;
			if(temp == a.at(a.size()-1))
			{
				a.push_back(pointer);
			}
			else if(temp == pointer)
			{
				a.insert(a.begin()+(a.size()-1),pointer);
			}
			else
			{
				bool found = false;
				for(i=a.size()-2;i>=1;i--)
				{
					cout<<pointer<<" "<<a.at(i)<<" "<<a.at(i-1)<<"\n";
					cin>>temp;
					if(temp == pointer)
					{
						a.insert(a.begin()+i,pointer);
						found = true;
						break;
					}
				}
				if(found == false)
				{
					a.insert(a.begin(),pointer);	
				}				
			}
			if(a.size() == N)
			{
				answer.push_back(a);
				for(j=0;j<a.size();j++)
				{
					cout<<a.at(j)<<" ";
				}
				cout<<"\n";
				pointer = 3;
				cin>>temp;
			}
			pointer++;
		}
	}
}
