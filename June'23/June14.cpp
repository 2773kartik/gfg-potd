class Solution {
  public:
    long long maxDiamonds(int A[], int N, int K) {
        long long ans = 0;
        priority_queue<int> p;
        for(int i = 0; i < N; ++i) p.push(A[i]);
        for(int i = 0; i < K; ++i) {
            ans+=p.top();
            p.push(p.top()/2);
            p.pop();
        }
        return ans;
    }
};