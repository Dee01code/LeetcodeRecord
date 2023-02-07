class Solution
{
    public:
        string frequencySort(string s)
        {
​
            priority_queue<pair<int, char>> p;
​
            unordered_map<char, int> m;
​
            for (auto i: s)
            {
                m[i]++;
            }
​
            for (auto i: m)
            {
                if (i.second > 0)
                {
                    pair<int, char> temp = { i.second,
                        i.first
                    };
                    p.push(temp);
                }
            }
​
            string ans = "";
​
            while (!p.empty())
            {
                pair<int, char> temp = p.top();
                p.pop();
                for (int i = 0; i < temp.first; i++)
                {
                    ans += temp.second;
                }
            }
            return ans;
        }
};
