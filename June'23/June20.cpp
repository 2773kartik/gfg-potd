class Solution {
  public:
    int matchGame(long long N) {
        return N%5?N%5:-1;
    }
};