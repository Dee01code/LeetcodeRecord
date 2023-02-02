class Solution
{
    public:
​
        void solve(int op, int cl, string out, vector<string> &ans)
        {
​
            if (op == 0 && cl == 0)
            {
                ans.push_back(out);
                return;
            }
​
            if (op != 0)
            {
                string out1 = out;
                out1.push_back('(');
                solve(op - 1, cl, out1, ans);
            }
            if (cl > op)
            {
                string out2 = out;
                out2.push_back(')');
                solve(op, cl - 1, out2, ans);
            }
        }
​
    vector<string> generateParenthesis(int n)
    {
​
        vector<string> ans;
        solve(n, n, "", ans);
        return ans;
    }
};
