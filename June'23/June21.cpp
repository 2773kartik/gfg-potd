class Solution {
  public:
    int sumOfNaturals(int n) {
        long long m = n;
        return (m*(m+1)/2)%(1000000007);
    }
};