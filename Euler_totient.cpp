//AnkitCode99 here....
#include<bits/stdc++.h>
#define endl "\n"
#define ll long long int
#define MOD 1000000007
#define mp make_pair
#define pll pair<ll,ll>
#define pb push_back
//max xor btw range of two numbers..
#define max_XOR(a,b) (1 << int(log2(a ^ b) + 1)) - 1
#define vl vector<ll>
#define inf 1e20
#define all(v) (v.begin(),v.end())
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define rep(i,a,b) for(long long int i=a;i<b;i++)
#define nrep(i,a,b) for(long long int i=a;i>=b;i--)
using namespace std;

ll phi(ll n)
{
	vector<ll> v;
	ll num=n;
	rep(i,2,(ll)sqrt(n)+1)
	{
		if(n%i==0)
		{
			v.pb(i);
			while(n%i==0)
			{
				n/=i;
			}
		}
	}
	if(n>1)
	{
		v.pb(n);
	}

	ll ans=num;
	
	rep(i,0,(ll)v.size())
	{
		ans=(ans*(v[i]-1))/v[i];
	}
	return ans;
}

int main()
{
	fast;
    #ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	ll n;
	cin>>n;
	cout<<phi(n);
}