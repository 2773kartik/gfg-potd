class Solution
{
    public:
        void Rearrange(int arr[], int n)
        {
            vector<int> a, b;
            for(int i = 0; i < n; ++i) {
                int it = arr[i];
                if(it<0) a.push_back(it);
                else b.push_back(it);
            }
            for(int i = 0; i < a.size(); ++i) arr[i] = a[i];
            for(int i = a.size(); i < n; ++i) arr[i] = b[i-a.size()];
        }
};