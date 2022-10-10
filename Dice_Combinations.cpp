#include<bits/stdc++.h>
using namespace std;

int f(int n,vector<int> &dp){
    if(n==0) return 1;
    if(n<0) return 0;
    if(dp[n]!=-1) return dp[n];
    dp[n]=0;//initially all elements int the dp array have value -1 so we need to make it 0
    for(int i=1;i<7;i++){
        dp[n]+=f(n-i,dp);
    }
    return dp[n];
}

int main(){
    int n;
    cin>>n;
    vector<int> dp(n+1,-1);
    cout<<f(n,dp);
}
