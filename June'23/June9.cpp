class Solution
{
	public:
	    vector<string> v;
	    unordered_set<string> ss;
	    void solve(string s, string k, int n) {
	        if(k.size()==n && !ss.count(k)) {
	            v.push_back(k);
	            ss.insert(k);
	        }
	        for(int i = 0; i < s.size(); ++i) {
	            string st = s;
	            st.erase(i,1);
	            solve(st, k+s[i], n);
	        }
	    }
		vector<string>find_permutation(string S)
		{
		    int n = S.size();
		    solve(S, "", n);
		    sort(v.begin(),v.end());
		    return v;
		}
};
