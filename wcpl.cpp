#include<bits/stdc++.h>


#define vll vector<ll>


#define w(t) while(t--)
#define test(x) ll t; cin>>t; w(t) x()



#define ll long long int
#define takeINP(arr,n) for(long long int i=0;i<n;i++) cin>>arr[i];
#define f(i,s,e) for(long long int i=s;i<e;i++)
#define cf(i,s,e) for(long long int i=s;i<=e;i++)





#define all(v) v.begin(),v.end()

using namespace std;
ll dp[4020][4020];
ll pref[4020];

ll Dfn(ll idx, ll taken, ll n, ll k, vll &arr) {
	if (taken >= k and (pref[idx] - taken >= k)) return 0;
	else if (idx >= n)  return 1e10;
	else if (dp[idx][taken] != -1) return dp[idx][taken];

	///so now two choice again
	ll c1 = Dfn(idx + 1, min(taken + arr[idx], pref[idx] - taken), n, k, arr);
	ll c2 = Dfn(idx + 1, min(pref[idx] - taken + arr[idx], taken), n, k, arr);

	return dp[idx][taken] = 1 + min(c1, c2);
}

ll giveme(vll &arr, ll n, ll k) {
	f(i, 0, n / 2) swap(arr[i], arr[n - i - 1]);
	cf(i, 0, n + 10) {
		pref[i] = 0;
		cf(j, 0, k + 10) dp[i][j] = -1;
	}
	cf(i, 1, n) pref[i] = pref[i - 1] + arr[i - 1];
	ll ans = Dfn(0, 0, n, k, arr);
	return ans > 1e9 ? -1 : ans;
}

void solveit() {
	ll n, k; cin >> n >> k;
	vll arr(n, 0);
	takeINP(arr, n);
	sort(all(arr));
	if (n == 1) {
		cout << "-1" << endl;
		return;
	}
	cout << giveme(arr, n, k) << endl;
}

int main() {


	test(solveit);
	return 0;

}