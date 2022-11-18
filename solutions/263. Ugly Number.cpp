class Solution
{
    public:
        bool isUgly(int n)
        {
            if (n > 0)
            {
                for (int i = 2; i < 6; i++)
                {
                    while (n % i == 0)
                    {
                        n /= i;
                    }
                }
            }
            return n == 1;
        }
};
