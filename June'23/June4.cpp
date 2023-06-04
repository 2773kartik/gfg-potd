class Solution
{
  public:
    bool isOp(char a) {
        return (a=='+' || a=='-' || a=='*' || a=='/');
    }
    string reverseEqn (string s)
        {
            stack<string> a;
            string x = "", y = "";
            for(auto it:s) {
                if(!isOp(it)) {
                    x+=it;
                }
                else {
                    y+=it;
                    a.push(x);
                    a.push(y);
                    x = ""; y = "";
                }
            }
            a.push(x);
            x = "";
            while(!a.empty()) {
                x+=a.top();
                a.pop();
            }
            return x;
        }
};