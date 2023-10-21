
class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!= t.length()) return false;
        unordered_map<char,int> s_map,t_map;
        for(auto letters : s)
            s_map[letters]++;
        for(auto letters : t)
            t_map[letters]++;
        for(auto& [keys,count] : t_map)
            if(t_map[keys]!=s_map[keys]) return false;
        return true;
    }
};