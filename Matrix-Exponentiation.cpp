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
ll ar[101][101],idt[101][101];

void mul(ll a[][101],ll b[][101],ll dim)
{
	ll res[dim+1][dim+1];

	rep(i,0,dim)
	{
		rep(j,0,dim)
		{
			res[i][j]=0;
			rep(k,0,dim)
			{
				res[i][j]+=a[i][k]*b[k][j];
			}
		}
	}

	rep(i,0,dim)
	{
		rep(j,0,dim)
		{
			a[i][j]=res[i][j];
		}
	}
}

void power(ll a[][101],ll dim,ll p)
{
	rep(i,0,dim)
	{
		rep(j,0,dim)
		{
			if(i==j)
				idt[i][j]=1;
			else
				idt[i][j]=0;
		}
	}

	while(p)
	{
		if(p&1)
		{
			mul(idt,a,dim);
			p--;
		}
		else
		{
			mul(a,a,dim);
			p/=2;
		}
	}

	rep(i,0,dim)
	{
		rep(j,0,dim)
		{
			a[i][j]=idt[i][j];
		}
	}
}

void print(ll a[][101],ll dim)
{
	rep(i,0,dim)
	{
		rep(j,0,dim)
		{
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
}

int main()
{
	fast;
    #ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	ll t;
	cin>>t;
	while(t--)
	{
		ll dim,p;
		cin>>dim>>p;
		rep(i,0,dim)
		{
			rep(j,0,dim)
			{
				cin>>ar[i][j];
			}		
		}

		power(ar,dim,p);

		print(ar,dim);
	}
}