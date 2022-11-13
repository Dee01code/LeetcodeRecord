class Solution
{
    public:
​
        int subarrayLCM(vector<int> &nums, int k)
        {
​
            int n = nums.size();
            int ans = 0;
​
            for (int i = 0; i < n; i++)
            {
                long long int temp = nums[i];
                if (temp == k) ans++;
                for (int j = i + 1; j < n; j++)
                {
                    temp = lcm(temp, nums[j]);
                    if (temp > k) break;
                    if (temp == k) ans++;
                }
            }
            return ans;
        }
};
