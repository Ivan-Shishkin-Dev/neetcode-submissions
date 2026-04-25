class Solution {
public:
    bool isAnagram(string s, string t) {
        std::unordered_map<char, int> string_s;
        std::unordered_map<char, int> string_t;
        
        //Populating the hashmap for String S
        for (int i = 0; i < s.size(); ++i) {
            string_s[s[i]] += 1;
        }

        //Populating the hashmap for String T
        for (int j = 0; j < t.size(); ++j) {
            string_t[t[j]] += 1;
        }

        return string_s == string_t;

    }
};
