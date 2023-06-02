class Solution{
public:
    vector<int>prime;
    void precompute(){
        vector<bool>isprime(1e6+1,true);
        isprime[0]=false;
        isprime[1]=false;
        for(int i=2;i<1e6+1;i++)
        {
            if(isprime[i]==true)
            {
                prime.push_back(i);
                int j=2*i;
                while(j<1e6+1)
                {
                    isprime[j]=false;
                    j=j+i;
                }
            }
        }
    }
    void dfs(int i, vector<vector<int>> &g, vector<bool>& vis, int& ans) {
        vis[i] = 1;
        ++ans;
        for(auto it:g[i]) {
            if(!vis[it]) {
                dfs(it, g, vis, ans);
            }
        }
    }
    int helpSanta(int n, int m, vector<vector<int>> &g){
        vector<bool> vis(n+1,0);
        int ans = 0, fin = 0;
        for(int i = 1; i <= n; ++i) {
            if(!vis[i]) {
                ans = 0;
                dfs(i, g, vis, ans);
                fin = max(ans, fin);
            }
        }
        if(fin==1) return -1;
        return prime[fin-1];
    }
};