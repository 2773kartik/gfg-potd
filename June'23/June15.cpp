class Solution {
  public:
    string longestPalin (string S) {
        if(S.size()<=1) return S;
        int len = 0; string ans = "";
        for(int i = 0; i < S.size(); ++i) {
            int l = i, r = i;
            while(l>=0 && r<S.size() && S[l]==S[r]) {
                if((r-l+1)>len) {
                    len = r-l+1; ans = S.substr(l,len);
                }
                --l; ++r;
            }
            l = i; r = i+1;
            while(l>=0 && r<S.size() && S[l]==S[r]) {
                if((r-l+1)>len) {
                    len = r-l+1; ans = S.substr(l,len);
                }
                --l; ++r;
            }
        }
        return ans;
    }
};