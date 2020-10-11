class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> mp;
        vector<vector<string>> ans;
        for(string str:strs){
            string tmp = str;
            sort(str.begin(), str.end());
            mp[str].emplace_back(tmp);
        }
        for(auto it = mp.begin(); it != mp.end(); it++){
            ans.emplace_back(it->second);
        }
        return ans;
    }
};