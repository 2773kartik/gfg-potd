class Solution {
public:
    void solve(vector<vector<char>>& b, string& w, string& t, int i, int j, bool& ans) {
        int n = t.size();
        t+=b[i][j];
        b[i][j] = '.';
        if(t==w) {
            ans = true;
            return;
        }
        //cout<<t<<" "<<i<<" "<<j<<"\n";
        if(i-1>=0 && w[n+1]==b[i-1][j]) solve(b, w, t, i-1, j, ans);
        if(j-1>=0 && w[n+1]==b[i][j-1]) solve(b, w, t, i, j-1, ans);
        if(i+1<b.size() && w[n+1]==b[i+1][j]) solve(b, w, t, i+1, j, ans);
        if(j+1<b[0].size() && w[n+1]==b[i][j+1]) solve(b, w, t, i, j+1, ans);
        b[i][j] = t[n];
    }
    bool isWordExist(vector<vector<char>>& board, string word) {
        int n = board.size(), m = board[0].size();
        bool ans = 0; string t = "";
        for(int i = 0; i < n; ++i) {
            for(int j = 0; j < m; ++j) {
                if(board[i][j]==word[0]) {
                    t = "";
                    solve(board, word, t, i, j, ans);
                    if(ans) return ans;
                }
            }
        }
        return ans;
    }
};