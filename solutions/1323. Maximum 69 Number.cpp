class Solution {
public:
    int maximum69Number (int num) {
        
        string t = to_string(num);
        int cnt = 10;
        for(int i=0; i<t.size(); i++){
            if(t[i] == '6'){
                t[i] = '9';
                break;
            }
        }
        num = stoi(t);
        return num;
    }
};
