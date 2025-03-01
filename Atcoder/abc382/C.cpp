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
#define pb(a,b) push_back(a,b)
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


#define N 1000010

int n,m;
int a[N],b[N],pre[N],pos[N];
void solve()
{
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	pre[1]=a[1];
	pos[1]=1;
	for(int i=2;i<=n;i++)
	{
		if(a[i]>pre[i-1]) pre[i]=pre[i-1],pos[i]=pos[i-1];
		else pre[i]=a[i],pos[i]=i;
//		DEBUG(pre[i],1);
	}
	pre[n+1]=0;
	pos[n+1]=-1;
	for(int i=1;i<=n;i++) pre[i]=-pre[i];
	for(int i=1;i<=m;i++)
	{
		cin>>b[i];
		int p=lower_bound(pre+1,pre+n+1+1,-b[i])-pre;
//		DEBUG(p,2);
		cout<<pos[p]<<endl;
	}
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	cout.precision(10);
	int t=1;
//	cin>>t;
	LOOP(t)
	{
		solve();
	}
	return 0;
}
