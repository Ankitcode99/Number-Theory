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
ll power(ll a,ll b)
{
    ll res=1;
    while(b>=1)
    {
        if(b%2==1)
        {
            res=res*a;
        }
        a=a*a;
        b=b/2;
    }
    return res;
}

int main()
{
	clock_t t=clock();
	cout<<power(19,23)<<endl;
	t=clock()-t;
	cout<<(float)t/CLOCKS_PER_SEC<<" seconds"<<endl;
}