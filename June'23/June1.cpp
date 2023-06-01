class Solution
{
	public:
	//Function to return list containing vertices in Topological order. 
	void dfs(int i, stack<int>& st, vector<int> adj[], int vis[]) {
	    vis[i] = 1;
	    for(auto it:adj[i]) {
	        if(!vis[it]) dfs(it, st, adj, vis);
	    }
	    st.push(i);
	}
	vector<int> topoSort(int V, vector<int> adj[]) 
	{
	    int vis[V] = {0};
	    stack<int> st;
	    vector<int> ans;
	    for(int i = 0; i < V; ++i) {
	        if(!vis[i]) {
	            dfs(i, st, adj, vis);
	        }
	    }
	    while(!st.empty()) {
	        ans.push_back(st.top());
	        st.pop();
	    }
	    return ans;
	}
};