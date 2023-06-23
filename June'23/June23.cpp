class Solution {
  public:
    int leastInterval(int N, int K, vector<char> &tasks) {
        int arr[26] {0};
        for(auto it:tasks) arr[it-'A']++;
        int a = 0, b = 0;
        for(int i = 0; i < 26; ++i) a = max(a, arr[i]);
        for(int i = 0; i < 26; ++i) if(arr[i] == a) ++b;
        return max(N, b + (a-1)*(K+1));
    }
};