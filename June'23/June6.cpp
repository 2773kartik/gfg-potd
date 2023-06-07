class Solution
{
    public:
    int am = INT_MAX;
    int an = INT_MAX;
    void inorder(Node* root, Node*& pre, Node*& suc, int k) {
        if(root==NULL) return;
        if(root->key > k) {
            int re = am;
            am = min(am, root->key-k);
            if(am!=re) suc = root;
        }
        else if(root->key < k) {
            int re = an;
            an = min(an, k-root->key);
            if(an!=re) pre = root;
        }
        inorder(root->left, pre, suc, k);
        inorder(root->right, pre, suc, k);
    }
    void findPreSuc(Node* root, Node*& pre, Node*& suc, int key)
    {
        inorder(root, pre, suc, key);
    }
};