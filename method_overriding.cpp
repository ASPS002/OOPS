#include <bits/stdc++.h>
#include <iostream>
using namespace std;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
#define speed                     \
	ios_base::sync_with_stdio(0); \
	cin.tie(0);                   \
	cout.tie(0);
#define ll long long
#define pb push_back
#define mem1(a) memset(a, -1, sizeof(a))
#define mem0(a) memset(a, 0, sizeof(a))
#define setp(x) fixed << setprecision(x)
#define endl "\n"
#define mod 1000000007
#define mod1 998244353
#define ff first
#define ss second
#define MAX 100005
#define N 500005
#define INF 10000000000000000
#define all(v) v.begin(), v.end()
#define sbit(a) __builtin_popcount(a)
template <typename T>
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
typedef pair<ll, ll> pll;
typedef pair<pll, ll> ppl;
typedef map<ll, ll> mpll;
typedef map<vector<ll>, ll> mpvl;
ll power(ll x, ll y, ll p)
{
	ll res = 1;

	x = x % p;

	if (x == 0)
		return 0;
	while (y > 0)
	{

		if (y & 1)
			res = (res * x) % p;

		y = y >> 1;
		x = (x * x) % p;
	}

	return res;
}
class A
{
	int l, b, h;

public:
	void f1()
	{
		cout << "B-CLASS" << endl;
	}
	void f2();
};
class B : public A
{
	int l, b, h;

public:
	void f1() //method overriding
	{
		cout << "D-CLASS" << endl;
	}
	void f2(int x); //method hiding
};
void solve()
{
	B obj;
	obj.f1(); //early binding it sees object type i.e B and goes in it
			  // agar child class me na milta toh parent class me jata

	/*obj.f2();*/ //error coz function name is present in D class so it binds to it but arguments not same so error

	obj.f2(4);//works fine
}
int main()
{
	speed;
	ll kk;
	kk = 1;
	// cin >> kk;
	while (kk--)
	{
		solve();
	}
}