class Solution{
    public:
    // Function to insert element into the queue
    void insert(queue<int> &q, int k){
        q.push(k);
    }
    
    // Function to find frequency of an element
    // return the frequency of k
    int findFrequency(queue<int> &q, int k){
        int n = q.size(), count = 0;
        while(n--) {
            if(q.front()==k) ++count;
            q.push(q.front());
            q.pop();
        }
        return count;
    }
    
};