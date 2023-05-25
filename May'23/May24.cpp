class Solution {
  public:
    int getMaximum(int N, vector<int> &arr) {
        long long sum = 0;
        for(auto it:arr) sum+=it;
        for(int i = N; i > 0; --i) if(sum%i==0) return i;
        return 1;
    }
};