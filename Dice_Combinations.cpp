#include<bits/stdc++.h>
using namespace std;
#define ll long long int

ll f(ll n,vector<ll> &dp){
    ll mod=1e9+7;
    if(n<0) return 0;

    if(n==0) return 1;
    
    if(dp[n]!=-1) return dp[n];
    dp[n]=0;//initially all elements int the dp array have value -1 so we need to make it 0
    for(ll i=1;i<=6;i++){
        dp[n]+=f(n-i,dp);
        dp[n]%=mod;
    }
    return dp[n];
}

int main(){
    ll n;
    cin>>n;
    vector<ll> dp(n+1,-1);
    cout<<f(n,dp);
}
