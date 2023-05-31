class Solution{
public:
    int LargButMinFreq(int arr[], int n) {
        map<int,int> k;
        for(int i = 0; i < n; ++i) k[arr[i]]++;
        int m = INT_MAX;
        for(auto it:k) m = min(m, it.second);
        int ans = 0;
        for(auto it:k) if(it.second==m) ans = max(ans, it.first);
        return ans;
    }
};