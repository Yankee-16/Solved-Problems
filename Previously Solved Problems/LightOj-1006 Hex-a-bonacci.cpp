#include<bits/stdc++.h>
using namespace std;

long long dp[100005];

long long a, b, c, d, e, f;
long long fn( long long n ) {
    if( n == 0 ) return a;
    if( n == 1 ) return b;
    if( n == 2 ) return c;
    if( n == 3 ) return d;
    if( n == 4 ) return e;
    if( n == 5 ) return f;
    if (dp[n]==-1)
        dp[n] = (fn(n-1) + fn(n-2) + fn(n-3) + fn(n-4)+ fn(n-5) + fn(n-6))%10000007 ;
    return dp[n];
}
int main() {
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
    long long n, caseno = 0, cases;
    scanf("%lld", &cases);
    while( cases-- ) {
        memset(dp, -1, sizeof(dp));
        scanf("%lld %lld %lld %lld %lld %lld %lld", &a, &b, &c, &d, &e, &f, &n);
        dp[0]=a, dp[1]=b, dp[2]=c, dp[3]=d, dp[4]=e, dp[5]=f;
        printf("Case %lld: %lld\n", ++caseno, fn(n) % 10000007);
    }
    return 0;
}
