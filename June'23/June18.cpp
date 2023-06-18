class Solution {
  public:
    int distributeTicket(int N, int k) {
        int l = 1, r = N;
        while(l<=r) {
            if(r-l>=k) l+=k;
            else return r;
            if(r-l>=k) r-=k;
            else return l;
        }
        return -1;
    }
};