#include <bits/stdc++.h>

using namespace std;
int dp[100005];
int N;
int make_it(int n)
{
    if (N == n)
        return 1;
    if (N < n)
    {
        return 0;
    }
    if (dp[n] != -1)
    {
        return dp[n];
    }

    int op1 = make_it(n + 3);
    int op2 = make_it(n * 2);
    
    return dp[n] = op1 || op2;
}

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        cin >> N;
        memset(dp, -1, sizeof(dp));
        if (make_it(1))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}