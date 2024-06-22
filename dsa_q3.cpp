class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> words;
        for(int i=0;i<strs.size();i++){
            string word=strs[i];
            sort(word.begin(),word.end());
            words[word].push_back(strs[i]);
        }
        vector<vector<string>>ans;
        for(auto j:words){
            ans.push_back(j.second);
        }
        return ans;
    }
};
