class Solution {
public:
    vector<int> vowelStrings(vector<string>& words, vector<vector<int>>& queries) {
        
        int n = words.size();
        vector<int> preVow(n,0);
        
        if((words[0][0] == 'a' || words[0][0] == 'e' || words[0][0] == 'i' ||words[0][0] == 'o' || words[0][0] == 'u') && (words[0].back() == 'a' || words[0].back() == 'e' || words[0].back() == 'i' || words[0].back() == 'o' || words[0].back() == 'u')) preVow[0] = 1;
        
        for(int i=1; i<n; i++){
            if((words[i][0] == 'a' || words[i][0] == 'e' || words[i][0] == 'i' ||words[i][0] == 'o' || words[i][0] == 'u') && (words[i].back() == 'a' || words[i].back() == 'e' || words[i].back() == 'i' || words[i].back() == 'o' || words[i].back() == 'u')) preVow[i] += preVow[i-1]+1;
        
        else
            preVow[i] += preVow[i-1];
        }
        vector<int> ans;
        for(auto i : queries){
            if(i[0] == 0) ans.push_back(preVow[i[1]]);
            else{
                ans.push_back(preVow[i[1]]-preVow[i[0]-1]);
            }
        }
        return ans;
        
    }
};
