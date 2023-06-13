class Solution{
public:	
	vector<int> kLargest(int arr[], int n, int k) {
	    priority_queue<int, vector<int>, greater<int>> p;
	    for(int i = 0; i < n; ++i) {
	        p.emplace(arr[i]);
	        if(p.size()>k) p.pop();
	    }
	    vector<int> ans;
	    while(!p.empty()) {
	        ans.push_back(p.top());
	        p.pop();
	    }
	    reverse(ans.begin(), ans.end());
	    return ans;
	}

};