/**************************************************************
 * Problem: 
 * Author: Vanilla_chan
 * Date: 
 * E-Mail: heshaohong2015@outlook.com
 **************************************************************/
#include<iostream>
#include<algorithm>
#include<cstdio>
#include<string>
#include<cstring>
#include<cmath>
#include<map>
#include<set>
#include<queue>
#include<vector>
#include<limits.h>
#define IL inline
#define re register
#define LL long long
#define ULL unsigned long long
#ifdef TH
#define debug printf("Now is %d\n",__LINE__);
#else
#define debug
#endif
#ifdef ONLINE_JUDGE
char buf[1<<23],* p1=buf,* p2=buf,obuf[1<<23],* O=obuf;
#define getchar() (p1==p2&&(p2=(p1=buf)+fread(buf,1,1<<21,stdin),p1==p2)?EOF:*p1++)
#endif
using namespace std;



#define N 1000010

int n,q;
int L,R;
int ans;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	cout.precision(10);
	int t=1;
//	cin>>t;
	while(t--)
	{
		cin>>n>>q;
		L=1,R=2;
		while(q--)
		{
			char ch;int tar;
			cin>>ch>>tar;
			int need=0;
			if(ch=='L')
			{
				vector<int>way;
				bool flag=0;
				for(int i=L;i!=tar;i=i%n+1)
				{
					way.push_back(i);
					if(i==R) flag=1;
				}
				if(flag)
				{
					need=n-way.size();
				}
				else need=way.size();
				L=tar;
			}
			else
			{
				vector<int>way;
				bool flag=0;
				for(int i=R;i!=tar;i=i%n+1)
				{
					way.push_back(i);
					if(i==L) flag=1;
				}
				if(flag)
				{
					need=n-way.size();
				}
				else need=way.size();
				R=tar;
			}
			
			
			ans+=need;
//			cout<<need<<endl;
		}
		
		cout<<ans;
		
	}
	return 0;
}
