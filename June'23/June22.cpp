class Solution {
  public:
    bool lemonadeChange(int N, vector<int> &bills) {
        int a, b, c;
        a = b = c = 0;
        for(auto it:bills) {
            if(it==5)++a;
            else if(it==10) {
                if(a>0) {
                    ++b; --a;
                }
                else return false;
            }
            else {
                if(a>0 && b>0) {
                    --b; --a; ++c;
                }
                else if(a>2) {
                    a-=3; ++c;
                }
                else return false;
            }
        }
        return true;
    }
};