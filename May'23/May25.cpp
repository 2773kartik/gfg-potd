class Solution {
  public:
    set<string> ans; 
    int eval(string s, int n) {
        int ans = 0;
        int i = 0, j;
        stack<int> k;
        int f = 4;
        for(int i = 1; i < s.size()-1; ++i) {
            if(s[i]=='0' && (s[i+1] <='9' && s[i+1]>='0') && !(s[i-1] <='9' && s[i-1]>='0')) return n-1;
        }
        for(auto it:s) {
            if(it=='+' || it=='-' || it=='*') {
                if(f==1) k.push(-1*(i));
                else if(f==2) {
                    j = k.top(); k.pop();
                    k.push(j*(i));
                }
                else k.push(i);
                if(it=='+') f = 0;
                else if(it=='-') f = 1;
                else f = 2;
                i = 0;
            }
            if(it<='9' && it>='0') {
                i*=10; i+=(it-'0');
            }
        }
        if(f==1) k.push(-1*(i));
        else if(f==2) {
            j = k.top(); k.pop();
            k.push(j*(i));
        }
        else k.push(i);
        while(!k.empty()) {
            ans+=(k.top()); k.pop();
        }
        return ans;
    }
    void solve(string s, int n, int i) {
        if(eval(s, n)==n) {
            ans.insert(s);
        }
        if(i >= s.size()-1) return;
        string s1, s2, s3;
        s1 = s2 = s3 = "";
        for(int j = 0; j <= i; j++) {
            s1+=s[j];
            s2+=s[j];
            s3+=s[j];
        }
        s1+='+';
        s2+='-';
        s3+='*';
        for(int j = i+1; j < s.size(); j++) {
            s1+=s[j];
            s2+=s[j];
            s3+=s[j];
        }
        solve(s, n, i+1);
        solve(s1, n, i+2);
        solve(s2, n, i+2);
        solve(s3, n, i+2);
    }
    vector<string> addOperators(string S, int target) {
        solve(S, target, 0);
        vector<string> lol;
        for(auto it:ans) lol.push_back(it);
        return lol;
    }