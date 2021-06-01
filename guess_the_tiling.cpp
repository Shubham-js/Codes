#include<bits/stdc++.h>
using namespace std;


#define ll long long
#define vll vector<ll>
#define fill(w,t) memset(w,t,sizeof(w))
#define out cout.flush()
#define sfor(i,azz,bzz) for (ll i = (azz); i <= (bzz); ++i)
#define rfor(i,bzz,azz) for (ll i = (bzz); i >= (azz); --i)


vll fact , i, p, sfor;
bool solve(ll countu) {
  ll n, q, k;
  cin >> n >> q >> k;
  ll ans[n][n];
  ll r;
  fill(ans, -1);
  cout << 1 << " " << 1 << " " << 1 << endl;
  out;
  cin >> r;
  if (r == -1) return false;
  if (r < k)
  {
    ans[0][0] = 1;
    ans[0][1] = 1;
    ans[1][0] = 1;
    ans[1][1] = 0;
  }
  else if (r > k)
  {
    ans[0][0] = 0;
    ans[0][1] = 1;
    ans[1][0] = 1;
    ans[1][1] = 0;
  }
  else
  {
    bool flag = false;
    ll ri = 0, ci = 1;
    sfor(i, 0, 3)
    {
      ll rj = 0, cj = 2;
      sfor(j, 0, 2)
      {
        k = r;
        cout << 1 << " " << (rj % 2) + 1 << " " << cj << endl;
        out;
        cin >> r;
        if (r == -1) return false;
        if (r > k)
        {
          if (n == 2)
          {
            flag = true;
            ans[0][0] = 0;
            ans[0][1] = 1;
            ans[1][0] = 1;
            ans[1][1] = 0;
            break;
          }
          k = r;
          cout << 1 << " " << 1 << " " << 1 << endl;
          out;
          cin >> r;
          if (r == -1) return false;
          if (r < k)
          {
            flag = true;
            ans[0][0] = 1;
            ans[0][1] = 1;
            ans[1][0] = 1;
            ans[1][1] = 0;
            break;
          }
          k = r;
          cout << 1 << " " << 1 << " " << 1 << endl;
          out;
          cin >> r;
          if (r == -1) return false;
        }
        rj++;
      }
      if (flag) break;
      ri++;
      k = r;
      cout << 1 << " " << (ri % 2) + 1 << " " << ci << endl;
      out;
      cin >> r;
      if (r == -1) return false;
      if (r > k)
      {
        if (n == 2)
        {
          flag = true;
          ans[0][0] = 0;
          ans[0][1] = 1;
          ans[1][0] = 1;
          ans[1][1] = 0;
          break;
        }
        k = r;
        cout << 1 << " " << 1 << " " << 1 << endl;
        out;
        cin >> r;
        if (r == -1) return false;
        if (r < k)
        {
          flag = true;
          ans[0][0] = 1;
          ans[0][1] = 1;
          ans[1][0] = 1;
          ans[1][1] = 0;
          break;
        }
        k = r;
        cout << 1 << " " << 1 << " " << 1 << endl;
        out;
        cin >> r;
        if (r == -1) return false;
      }
    }
  }
  sfor(i, 2, n - 1)
  {
    if (ans[i - 1][0] != 0)
    {
      k = r;
      cout << 1 << " " << i << " " << 1 << endl;
      out;
      cin >> r;
      if (r == -1) return false;
      ans[i - 1][0] ^= 1;
      if (r > k)
      {
        ans[i][0] = 1;
        ans[i][1] = 0;
      }
    }
    if (ans[i - 1][1] != 1)
    {
      k = r;
      cout << 1 << " " << i << " " << 2 << endl;
      out;
      cin >> r;
      if (r == -1) return false;
      ans[i - 1][1] ^= 1;
      if (r > k)
      {
        ans[i][0] = 1;
        ans[i][1] = 0;
      }
    }
    if (ans[i][0] != -1) continue;
    ll cj = 0;
    sfor(j, 0, 3)
    {
      k = r;
      cout << 1 << " " << i + 1 << " " << (cj % 2) + 1 << endl;
      out;
      cin >> r;
      if (r == -1) return false;
      if (r > k)
      {
        k = r;
        cout << 1 << " " << i << " " << 1 << endl;
        out;
        cin >> r;
        ans[i - 1][0] ^= 1;
        if (r == -1) return false;
        if (r < k)
        {
          ans[i][0] = 1;
          ans[i][1] = 0;
          break;
        }
        k = r;
        cout << 1 << " " << i << " " << 1 << endl;
        out;
        cin >> r;
        ans[i - 1][0] ^= 1;
        if (r == -1) return false;
      }
      cj++;
    }
  }
  sfor(i, 2, n - 1)
  {
    if (ans[0][i - 1] != 0)
    {
      k = r;
      cout << 1 << " " << 1 << " " << i << endl;
      out;
      cin >> r;
      if (r == -1) return false;
      ans[0][i - 1] ^= 1;
      if (r > k)
      {
        ans[0][i] = 1;
        ans[1][i] = 0;
      }
    }
    if (ans[1][i - 1] != 1)
    {
      k = r;
      cout << 1 << " " << 2 << " " << i << endl;
      out;
      cin >> r;
      if (r == -1) return false;
      ans[1][i - 1] ^= 1;
      if (r > k)
      {
        ans[0][i] = 1;
        ans[1][i] = 0;
      }
    }
    if (ans[0][i] != -1) continue;
    ll rj = 0;
    sfor(j, 0, 3)
    {
      k = r;
      cout << 1 << " " << (rj % 2) + 1 << " " << i + 1 << endl;
      out;
      cin >> r;
      if (r == -1) return false;
      if (r > k)
      {
        k = r;
        cout << 1 << " " << 1 << " " << i << endl;
        out;
        cin >> r;
        ans[0][i - 1] ^= 1;
        if (r == -1) return false;
        if (r < k)
        {
          ans[0][i] = 1;
          ans[1][i] = 0;
          break;
        }
        k = r;
        cout << 1 << " " << 1 << " " << i << endl;
        out;
        cin >> r;
        if (r == -1) return false;
        ans[0][i - 1] ^= 1;
      }
      rj++;
    }
  }
  sfor(i, 2, n - 1)
  {
    sfor(j, 2, n - 1)
    {
      if (ans[i - 1][j - 1] != 0)
      {
        k = r;
        cout << 1 << " " << i << " " << j << endl;
        out;
        cin >> r;
        if (r == -1) return false;
        ans[i - 1][j - 1] ^= 1;
      }
      if (ans[i - 1][j] != 1)
      {
        k = r;
        cout << 1 << " " << i << " " << j + 1 << endl;
        out;
        cin >> r;
        if (r == -1) return false;
        ans[i - 1][j] ^= 1;
      }
      if (ans[i][j - 1] != 1)
      {
        k = r;
        cout << 1 << " " << i + 1 << " " << j << endl;
        out;
        cin >> r;
        if (r == -1) return false;
        ans[i][j - 1] ^= 1;
      }

      k = r;
      cout << 1 << " " << i + 1 << " " << j + 1 << endl;
      out;
      cin >> r;
      if (r == -1) return false;
      if (r > k)
      {
        ans[i][j] = 0;
      }
      else
      {
        ans[i][j] = 1;
      }
    }
  }
  cout << 2 << endl;
  sfor(i, 0, n - 1)
  {
    sfor(j, 0, n - 1)
    {
      cout << ans[i][j] << " ";
    }
    cout << endl;
  }
  out;
  cin >> r;
  if (r == -1) return false;
  return true;
}
int main()
{

  ll t = 1;
  cin >> t;
  sfor(i, 1, t)
  if (!solve(i)) break;


  return 0;
}

