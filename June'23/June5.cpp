class Solution
{
    public:
    //Function to find the least absolute difference between any node
	//value of the BST and the given integer.
    void solve(Node* root, int& ans, int k) {
        if(root==NULL) return;
        ans = min(ans, abs(root->data-k));
        solve(root->left,ans,k);
        solve(root->right,ans,k);
    }
    int minDiff(Node *root, int k)
    {
        int ans = INT_MAX;
        solve(root, ans, k);
        return ans;
    }
};