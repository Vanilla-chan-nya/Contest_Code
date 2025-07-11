/**************************************************************
 * Problem: 
 * Author: Vanilla_chan
 * Date: 
 * E-Mail: heshaohong2015@outlook.com
 **************************************************************/
#include<bits/stdc++.h>
#define IL inline
#define re register
#define LL long long
#define ll long long
#define ULL unsigned long long
#define ull unsigned long long
#define mk(a,b) make_pair(a,b)
#define pb(a) push_back(a)
#define endl '\n'
#ifdef TH
#define debug cout<<"Now is "<<__LINE__<<endl;
#else
#define debug
#endif

std::string COLORS[]={"\033[0m","\033[91m","\033[92m","\033[93m","\033[94m","\033[95m","\033[96m"};
std::string COLOR_NAMES[]={"RESET","RED","GREEN","YELLOW","BLUE","MAGENTA","CYAN"};

#define DEBUG(x,color)                   \
cout<<COLORS[color];                     \
cout << #x << " : " << x << endl;        \
cout<<COLORS[0];                         \
cout.flush();

#define LOOP(While_times) while(While_times-->0)
using namespace std;


#define N 2000100
int n;
LL s,x;
LL a[N],sum[N];
LL pre[N];
void solve()
{
	cin>>n>>s>>x;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		sum[i]=sum[i-1]+a[i];
//		pre[i]=pre[i-1]+(a[i]==x);
	}
	int ans=0;
	for(int r=1;r<=n;r++)
	{
		int now=0;
		for(int l=1;l<=r;l++)
		{
			LL mx=a[l];
			for(int i=l;i<=r;i++)
			{
				mx=max(mx,a[i]);
			}
			if(mx==x&&sum[r]-sum[l-1]==s)
			{
				now++;
				cout<<"l="<<l<<" r="<<r<<endl;
			}
		}
		cout<<"i="<<r<<" ans+="<<now<<endl;
		ans+=now;
	}
	cout<<ans<<endl;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	cout.precision(10);
	int t=1;
	cin>>t;
	LOOP(t)
	{
		solve();
	}
	return 0;
}
