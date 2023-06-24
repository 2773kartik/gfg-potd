class Solution{   
public:
    int klengthpref(string a[], int n, int k, string s){    
        if(s.size()<k) return 0;
        string x = s.substr(0,k);
        int i, ans = 0;
        for(int i = 0; i < n; ++i) {
            if(a[i].size()<k) continue;
            if(x==a[i].substr(0,k)) ans++;
        }
        return ans;
    }
};