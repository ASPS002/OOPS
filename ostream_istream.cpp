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
class complx
{
private:
	int a, b;

public:
	complx()
	{
	}
	complx(int x, int y)
	{
		a = x;
		b = y;
	}
	void setdata(int x, int y)
	{
		a = x, b = y;
	}
	void getdata()
	{
		cout << a << " " << b << endl;
	}
	complx add(complx c)
	{

		return complx(a + c.a, b + c.b);
	}
	complx operator+(complx c)
	{
		return complx(a + c.a, b + c.b);
	}
	complx operator-()
	{
		return complx(-a, -b);
	}
	friend ostream &operator<<(ostream &, complx);
	friend istream &operator>>(istream &, complx &);
};
ostream &operator<<(ostream &cout, complx c1)
{
	cout << c1.a << " " << c1.b ;
	return cout;
}
istream &operator>>(istream &cin, complx &c1)
{
	cin >> c1.a >> c1.b;
	return cin;
}
void solve()
{
	complx c1, c2;
	cin >> c1 >> c2;
	cout << c1 <<" "<< c2 << endl;
	operator<<(cout,c2);
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