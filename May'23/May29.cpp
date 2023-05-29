class Solution {
  public:
    vector<string> CamelCase(int N, vector<string> Dictionary, string Pattern) {
        vector<string> ans;
        for(auto it:Dictionary) {
            string temp = ""; int i;
            for(auto j:it) {
                if(j<='Z' && j>='A') temp+=j;
            }
            for(i = 0; i < Pattern.size(); ++i) {
                if(Pattern[i]!=temp[i]) break;
            }
            if(i==Pattern.size()) ans.push_back(it);
        }
        if(ans.empty()) ans.push_back("-1");
        return ans;
    }
};