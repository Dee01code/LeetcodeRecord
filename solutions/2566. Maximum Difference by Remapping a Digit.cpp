                    return num;
                }
​
                char tomax = s[max_dig];
                char tomin = s[0];
                for (int i = 0; i < s.size(); i++)
                {
​
                    if (maxi[i] == tomax)
                    {
                        maxi[i] = '9';
                    }
                }
​
                int maxnum = stoi(maxi);
​
                for (int i = 0; i < s.size(); i++)
                {
​
                    if (mini[i] == tomin)
                    {
                        mini[i] = '0';
                    }
                }
​
                int minnum = stoi(mini);
​
                return maxnum - minnum;
            }
            else
            {
​
                string maxi = s;
                string mini = s;
​
                char tomax = s[0];
                char tomin = s[0];
                for (int i = 0; i < s.size(); i++)
                {
​
                    if (maxi[i] == tomax)
                    {
                        maxi[i] = '9';
                    }
                }
​
                int maxnum = stoi(maxi);
​
                for (int i = 0; i < s.size(); i++)
                {
​
                    if (mini[i] == tomin)
                    {
                        mini[i] = '0';
                    }
                }
​
                int minnum = stoi(mini);
​
                // cout << maxnum << " "<< minnum;
                return maxnum - minnum;
            }
            return -1;
        }
};
