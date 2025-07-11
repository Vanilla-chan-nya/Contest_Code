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


#define N 10000100
int n,m;
int a[N],b[N];
void solve()
{
	cin>>n;
	m=0;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		if(a[i]!=b[m])
		{
			m++;
			b[m]=a[i];
		}
	}
	
	for(int i=1;i<=m;i++)
	{
		a[i]=b[i];
	}
	n=m;
	
	int len=0,ans=0;
	a[0]=-1000;
	for(int i=1;i<=n;i++)
	{
		
		if(a[i]!=a[i-1]+1) ans+=(len+1)/2,len=0;
		len++;
	}
	if(len) ans+=(len+1)/2;
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
