// Created by ganesh bhandarkar
#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;cin>>n;
    int dp[1000] = {0};
    dp[0]=0,dp[1]=1;
    for(int i=2;i<=n;i++){
    	dp[i]=dp[i-1]+dp[i-2];
    }
    cout<<dp[n-1];
    return 0;
}