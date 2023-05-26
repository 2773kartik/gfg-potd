class Solution{
    public:
    int numOfWays(int n, int x)
    {
        long long mod = 1e9+7;
        vector<long long> dp(n+1,0);
        dp[0] = 1;
        vector<long long> pows;
        for(int i = 1; i < n+1; ++i) {
            if(pow(i,x) > n) break;
            pows.push_back(pow(i,x));
        }
        for(auto it:pows) {
            for(int i = n; i > it-1; i--) {
                dp[i]+=dp[i-it];
                dp[i]%=mod;
            }
        }
        return dp[n];
    }
};